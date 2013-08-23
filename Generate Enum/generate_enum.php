<?php
// Info:
//   Generates the latest enums for NSString+FontAwesome.h from
//   icons.yml contained in the src folder of the font awesome master
//   branch on GitHub. Pipe the output into pbcopy and then paste it into
//   NSString+FontAwesome.h. Saves a ton of time updating the font.
//
// Usage:
//   php generate_enum.php /path/to/icons.yml | pbcopy
//
// Requires spyc YAML parser. https://github.com/mustangostang/spyc/

require_once "Spyc.php";

$filename = "";
if (isset($argv[1]))
  $filename = $argv[1];

if (!file_exists($filename)) {
	echo "Usage: php generate_enum.php /path/to/icons.yml\n";
}

$parsed_yaml = Spyc::YAMLLoad($filename);

$icons = $parsed_yaml['icons'];

echo "typedef enum {\n";

$allnames = array();

foreach ($icons as $icon)
{
  $id = $icon['id'];
  $hex  = $icon['unicode'];
  
  $tokens = explode("-", $id);
  foreach ($tokens as &$token)
    $token = ucfirst($token);
    
  $name = implode($tokens);
  
  echo "FAIcon$name = 0x$hex,\n";
  
  $allhex[] = "@0x" . $hex;
}

echo "} FAIcon;\n\n";

echo "#define FAICON_ARRAY @[ " . implode(", ", $allhex) . "]\n";

?>