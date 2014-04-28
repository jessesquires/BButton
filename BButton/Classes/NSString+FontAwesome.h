//
//  Created by Pit Garbe on 27.09.12.
//  Updated to Font Awesome 3.1.1 on 17.05.2013.
//  Copyright (c) 2012 Pit Garbe. All rights reserved.
//
//  https://github.com/leberwurstsaft/FontAwesome-for-iOS
//
//
//  * The Font Awesome font is licensed under the SIL Open Font License
//  http://scripts.sil.org/OFL
//
//
// * Font Awesome CSS, LESS, and SASS files are licensed under the MIT License
//  http://opensource.org/licenses/mit-license.html
//
//
//  * The Font Awesome pictograms are licensed under the CC BY 3.0 License
//  http://creativecommons.org/licenses/by/3.0
//
//
//  * Attribution is no longer required in Font Awesome 3.0, but much appreciated:
//  "Font Awesome by Dave Gandy - http://fortawesome.github.com/Font-Awesome"
//
//
//  -----------------------------------------
//  Edited and refactored by Jesse Squires on 2 April, 2013.
//
//  http://github.com/jessesquires/BButton
//
//  http://hexedbits.com
//

#import <Foundation/Foundation.h>

/**
 *  A string constant for the Font Awesome font family name.
 */
extern NSString * const kFontAwesomeFont;

/**
 *  A constant describing the available Font Awesome Icons.
 */
typedef NS_ENUM(NSUInteger, FAIcon){
    FAIconGlass = 0xf000,
    FAIconMusic = 0xf001,
    FAIconSearch = 0xf002,
    FAIconEnvelope = 0xf003,
    FAIconHeart = 0xf004,
    FAIconStar = 0xf005,
    FAIconStarEmpty = 0xf006,
    FAIconUser = 0xf007,
    FAIconFilm = 0xf008,
    FAIconThLarge = 0xf009,
    FAIconTh = 0xf00a,
    FAIconThList = 0xf00b,
    FAIconOk = 0xf00c,
    FAIconRemove = 0xf00d,
    FAIconZoomIn = 0xf00e,
    FAIconZoomOut = 0xf010,
    FAIconOff = 0xf011,
    FAIconSignal = 0xf012,
    FAIconCog = 0xf013,
    FAIconTrash = 0xf014,
    FAIconHome = 0xf015,
    FAIconFile = 0xf016,
    FAIconTime = 0xf017,
    FAIconRoad = 0xf018,
    FAIconDownloadAlt = 0xf019,
    FAIconDownload = 0xf01a,
    FAIconUpload = 0xf01b,
    FAIconInbox = 0xf01c,
    FAIconPlayCircle = 0xf01d,
    FAIconRepeat = 0xf01e,
    FAIconRefresh = 0xf021,
    FAIconListAlt = 0xf022,
    FAIconLock = 0xf023,
    FAIconFlag = 0xf024,
    FAIconHeadphones = 0xf025,
    FAIconVolumeOff = 0xf026,
    FAIconVolumeDown = 0xf027,
    FAIconVolumeUp = 0xf028,
    FAIconQrcode = 0xf029,
    FAIconBarcode = 0xf02a,
    FAIconTag = 0xf02b,
    FAIconTags = 0xf02c,
    FAIconBook = 0xf02d,
    FAIconBookmark = 0xf02e,
    FAIconPrint = 0xf02f,
    FAIconCamera = 0xf030,
    FAIconFont = 0xf031,
    FAIconBold = 0xf032,
    FAIconItalic = 0xf033,
    FAIconTextHeight = 0xf034,
    FAIconTextWidth = 0xf035,
    FAIconAlignLeft = 0xf036,
    FAIconAlignCenter = 0xf037,
    FAIconAlignRight = 0xf038,
    FAIconAlignJustify = 0xf039,
    FAIconList = 0xf03a,
    FAIconIndentLeft = 0xf03b,
    FAIconIndentRight = 0xf03c,
    FAIconFacetimeVideo = 0xf03d,
    FAIconPicture = 0xf03e,
    FAIconPencil = 0xf040,
    FAIconMapMarker = 0xf041,
    FAIconAdjust = 0xf042,
    FAIconTint = 0xf043,
    FAIconEdit = 0xf044,
    FAIconShare = 0xf045,
    FAIconCheck = 0xf046,
    FAIconMove = 0xf047,
    FAIconStepBackward = 0xf048,
    FAIconFastBackward = 0xf049,
    FAIconBackward = 0xf04a,
    FAIconPlay = 0xf04b,
    FAIconPause = 0xf04c,
    FAIconStop = 0xf04d,
    FAIconForward = 0xf04e,
    FAIconFastForward = 0xf050,
    FAIconStepForward = 0xf051,
    FAIconEject = 0xf052,
    FAIconChevronLeft = 0xf053,
    FAIconChevronRight = 0xf054,
    FAIconPlusSign = 0xf055,
    FAIconMinusSign = 0xf056,
    FAIconRemoveSign = 0xf057,
    FAIconOkSign = 0xf058,
    FAIconQuestionSign = 0xf059,
    FAIconInfoSign = 0xf05a,
    FAIconScreenshot = 0xf05b,
    FAIconRemoveCircle = 0xf05c,
    FAIconOkCircle = 0xf05d,
    FAIconBanCircle = 0xf05e,
    FAIconArrowLeft = 0xf060,
    FAIconArrowRight = 0xf061,
    FAIconArrowUp = 0xf062,
    FAIconArrowDown = 0xf063,
    FAIconShareAlt = 0xf064,
    FAIconResizeFull = 0xf065,
    FAIconResizeSmall = 0xf066,
    FAIconPlus = 0xf067,
    FAIconMinus = 0xf068,
    FAIconAsterisk = 0xf069,
    FAIconExclamationSign = 0xf06a,
    FAIconGift = 0xf06b,
    FAIconLeaf = 0xf06c,
    FAIconFire = 0xf06d,
    FAIconEyeOpen = 0xf06e,
    FAIconEyeClose = 0xf070,
    FAIconWarningSign = 0xf071,
    FAIconPlane = 0xf072,
    FAIconCalendar = 0xf073,
    FAIconRandom = 0xf074,
    FAIconComment = 0xf075,
    FAIconMagnet = 0xf076,
    FAIconChevronUp = 0xf077,
    FAIconChevronDown = 0xf078,
    FAIconRetweet = 0xf079,
    FAIconShoppingCart = 0xf07a,
    FAIconFolderClose = 0xf07b,
    FAIconFolderOpen = 0xf07c,
    FAIconResizeVertical = 0xf07d,
    FAIconResizeHorizontal = 0xf07e,
    FAIconBarChart = 0xf080,
    FAIconTwitterSign = 0xf081,
    FAIconFacebookSign = 0xf082,
    FAIconCameraRetro = 0xf083,
    FAIconKey = 0xf084,
    FAIconCogs = 0xf085,
    FAIconComments = 0xf086,
    FAIconThumbsUp = 0xf087,
    FAIconThumbsDown = 0xf088,
    FAIconStarHalf = 0xf089,
    FAIconHeartEmpty = 0xf08a,
    FAIconSignout = 0xf08b,
    FAIconLinkedinSign = 0xf08c,
    FAIconPushpin = 0xf08d,
    FAIconExternalLink = 0xf08e,
    FAIconSignin = 0xf090,
    FAIconTrophy = 0xf091,
    FAIconGithubSign = 0xf092,
    FAIconUploadAlt = 0xf093,
    FAIconLemon = 0xf094,
    FAIconPhone = 0xf095,
    FAIconCheckEmpty = 0xf096,
    FAIconBookmarkEmpty = 0xf097,
    FAIconPhoneSign = 0xf098,
    FAIconTwitter = 0xf099,
    FAIconFacebook = 0xf09a,
    FAIconGithub = 0xf09b,
    FAIconUnlock = 0xf09c,
    FAIconCreditCard = 0xf09d,
    FAIconRss = 0xf09e,
    FAIconHdd = 0xf0a0,
    FAIconBullhorn = 0xf0a1,
    FAIconBell = 0xf0f3,
    FAIconCertificate = 0xf0a3,
    FAIconHandRight = 0xf0a4,
    FAIconHandLeft = 0xf0a5,
    FAIconHandUp = 0xf0a6,
    FAIconHandDown = 0xf0a7,
    FAIconCircleArrowLeft = 0xf0a8,
    FAIconCircleArrowRight = 0xf0a9,
    FAIconCircleArrowUp = 0xf0aa,
    FAIconCircleArrowDown = 0xf0ab,
    FAIconGlobe = 0xf0ac,
    FAIconWrench = 0xf0ad,
    FAIconTasks = 0xf0ae,
    FAIconFilter = 0xf0b0,
    FAIconBriefcase = 0xf0b1,
    FAIconFullscreen = 0xf0b2,
    FAIconGroup = 0xf0c0,
    FAIconLink = 0xf0c1,
    FAIconCloud = 0xf0c2,
    FAIconBeaker = 0xf0c3,
    FAIconCut = 0xf0c4,
    FAIconCopy = 0xf0c4,
    FAIconPaperClip = 0xf0c5,
    FAIconSave = 0xf0c7,
    FAIconSignBlank = 0xf0c8,
    FAIconReorder = 0xf0c9,
    FAIconListUl = 0xf0ca,
    FAIconListOl = 0xf0cb,
    FAIconStrikethrough = 0xf0cc,
    FAIconUnderline = 0xf0cd,
    FAIconTable = 0xf0ce,
    FAIconMagic = 0xf0d0,
    FAIconTruck = 0xf0d1,
    FAIconPinterest = 0xf0d2,
    FAIconPinterestSign = 0xf0d3,
    FAIconGooglePlusSign = 0xf0d4,
    FAIconGooglePlus = 0xf0d5,
    FAIconMoney = 0xf0d6,
    FAIconCaretDown = 0xf0d7,
    FAIconCaretUp = 0xf0d8,
    FAIconCaretLeft = 0xf0d9,
    FAIconCaretRight = 0xf0da,
    FAIconColumns = 0xf0db,
    FAIconSort = 0xf0dc,
    FAIconSortDown = 0xf0dd,
    FAIconSortUp = 0xf0de,
    FAIconEnvelopeAlt = 0xf0e0,
    FAIconLinkedin = 0xf0e1,
    FAIconUndo = 0xf0e2,
    FAIconLegal = 0xf0e3,
    FAIconDashboard = 0xf0e4,
    FAIconCommentAlt = 0xf0e5,
    FAIconCommentsAlt = 0xf0e6,
    FAIconBolt = 0xf0e7,
    FAIconSitemap = 0xf0e8,
    FAIconUmbrella = 0xf0e9,
    FAIconPaste = 0xf0ea,
    FAIconLightBulb = 0xf0eb,
    FAIconExchange = 0xf0ec,
    FAIconCloudDownload = 0xf0ed,
    FAIconCloudUpload = 0xf0ee,
    FAIconUserMd = 0xf0f0,
    FAIconStethoscope = 0xf0f1,
    FAIconSuitecase = 0xf0f2,
    FAIconBellAlt = 0xf0a2,
    FAIconCoffee = 0xf0f4,
    FAIconFood = 0xf0f5,
    FAIconFileAlt = 0xf0f6,
    FAIconBuilding = 0xf0f7,
    FAIconHospital = 0xf0f8,
    FAIconAmbulance = 0xf0f9,
    FAIconMedkit = 0xf0fa,
    FAIconFighterJet = 0xf0fb,
    FAIconBeer = 0xf0fc,
    FAIconHSign = 0xf0fd,
    FAIconPlusSignAlt = 0xf0fe,
    FAIconDoubleAngleLeft = 0xf100,
    FAIconDoubleAngleRight = 0xf101,
    FAIconDoubleAngleUp = 0xf102,
    FAIconDoubleAngleDown = 0xf103,
    FAIconAngleLeft = 0xf104,
    FAIconAngleRight = 0xf105,
    FAIconAngleUp = 0xf106,
    FAIconAngleDown = 0xf107,
    FAIconDesktop = 0xf108,
    FAIconLaptop = 0xf109,
    FAIconTablet = 0xf10a,
    FAIconMobilePhone = 0xf10b,
    FAIconCircleBlank = 0xf10c,
    FAIconQuoteLeft = 0xf10d,
    FAIconQuoteRight = 0xf10e,
    FAIconSpinner = 0xf110,
    FAIconCircle = 0xf111,
    FAIconReply = 0xf112,
    FAIconFolderCloseAlt = 0xf114,
    FAIconFolderOpenAlt = 0xf115,
    FAIconExpandAlt = 0xf065,
    FAIconCollapseAlt = 0xf066,
    FAIconSmile = 0xf118,
    FAIconFrown = 0xf119,
    FAIconMeh = 0xf11a,
    FAIconGamepad = 0xf11b,
    FAIconKeyboard = 0xf11c,
    FAIconFlagAlt = 0xf11d,
    FAIconFlagCheckered = 0xf11e,
    FAIconTerminal = 0xf120,
    FAIconCode = 0xf121,
    FAIconReplyAll = 0xf122,
    FAIconStarHalfAlt = 0xf123,
    FAIconLocationArrow = 0xf124,
    FAIconCrop = 0xf125,
    FAIconCodeFork = 0xf126,
    FAIconUnlink = 0xf127,
    FAIconQuestion = 0xf128,
    FAIconInfo = 0xf129,
    FAIconExclamation = 0xf12a,
    FAIconSuperscript = 0xf12b,
    FAIconSubscript = 0xf12c,
    FAIconEraser = 0xf12d,
    FAIconPuzzlePiece = 0xf12e,
    FAIconMicrophone = 0xf130,
    FAIconMicrophoneOff = 0xf131,
    FAIconShield = 0xf132,
    FAIconCalendarEmpty = 0xf133,
    FAIconFireExtinguisher = 0xf134,
    FAIconRocket = 0xf135,
    FAIconMaxCDN = 0xf136,
    FAIconChevronSignLeft = 0xf137,
    FAIconChevronSignRight = 0xf138,
    FAIconChevronSignUp = 0xf139,
    FAIconChevronSignDown = 0xf13a,
    FAIconHTML5 = 0xf13b,
    FAIconCSS3 = 0xf13c,
    FAIconFAIconAnchor = 0xf13d,
    FAIconUnlockAlt = 0xf13e,
    FAIconBullseye = 0xf140,
    FAIconEllipsisHorizontal = 0xf141,
    FAIconEllipsisVertical = 0xf142,
    FAIconRSS = 0xf143,
    FAIconPlaySign = 0xf144,
    FAIconTicket = 0xf145,
    FAIconMinusSignAlt = 0xf146,
    FAIconCheckMinus = 0xf147,
    FAIconLevelUp = 0xf148,
    FAIconLevelDown = 0xf149,
    FAIconCheckSign = 0xf14a,
    FAIconEditSign = 0xf14b,
    FAIconExternalLinkSign = 0xf14c,
    FAIconShareSign = 0xf14d,
    FAGlass = 0xf000,
    FAMusic = 0xf001,
    FASearch = 0xf002,
    FAEnvelopeO = 0xf003,
    FAHeart = 0xf004,
    FAStar = 0xf005,
    FAStarO = 0xf006,
    FAUser = 0xf007,
    FAFilm = 0xf008,
    FAThLarge = 0xf009,
    FATh = 0xf00a,
    FAThList = 0xf00b,
    FACheck = 0xf00c,
    FATimes = 0xf00d,
    FASearchPlus = 0xf00e,
    FASearchMinus = 0xf010,
    FAPowerOff = 0xf011,
    FASignal = 0xf012,
    FAGear = 0xf013,
    FACog = 0xf013,
    FATrashO = 0xf014,
    FAHome = 0xf015,
    FAFileO = 0xf016,
    FAClockO = 0xf017,
    FARoad = 0xf018,
    FADownload = 0xf019,
    FAArrowCircleODown = 0xf01a,
    FAArrowCircleOUp = 0xf01b,
    FAInbox = 0xf01c,
    FAPlayCircleO = 0xf01d,
    FARotateRight = 0xf01e,
    FARepeat = 0xf01e,
    FARefresh = 0xf021,
    FAListAlt = 0xf022,
    FALock = 0xf023,
    FAFlag = 0xf024,
    FAHeadphones = 0xf025,
    FAVolumeOff = 0xf026,
    FAVolumeDown = 0xf027,
    FAVolumeUp = 0xf028,
    FAQrcode = 0xf029,
    FABarcode = 0xf02a,
    FATag = 0xf02b,
    FATags = 0xf02c,
    FABook = 0xf02d,
    FABookmark = 0xf02e,
    FAPrint = 0xf02f,
    FACamera = 0xf030,
    FAFont = 0xf031,
    FABold = 0xf032,
    FAItalic = 0xf033,
    FATextHeight = 0xf034,
    FATextWidth = 0xf035,
    FAAlignLeft = 0xf036,
    FAAlignCenter = 0xf037,
    FAAlignRight = 0xf038,
    FAAlignJustify = 0xf039,
    FAList = 0xf03a,
    FADedent = 0xf03b,
    FAOutdent = 0xf03b,
    FAIndent = 0xf03c,
    FAVideoCamera = 0xf03d,
    FAPictureO = 0xf03e,
    FAPencil = 0xf040,
    FAMapMarker = 0xf041,
    FAAdjust = 0xf042,
    FATint = 0xf043,
    FAEdit = 0xf044,
    FAPencilSquareO = 0xf044,
    FAShareSquareO = 0xf045,
    FACheckSquareO = 0xf046,
    FAArrows = 0xf047,
    FAStepBackward = 0xf048,
    FAFastBackward = 0xf049,
    FABackward = 0xf04a,
    FAPlay = 0xf04b,
    FAPause = 0xf04c,
    FAStop = 0xf04d,
    FAForward = 0xf04e,
    FAFastForward = 0xf050,
    FAStepForward = 0xf051,
    FAEject = 0xf052,
    FAChevronLeft = 0xf053,
    FAChevronRight = 0xf054,
    FAPlusCircle = 0xf055,
    FAMinusCircle = 0xf056,
    FATimesCircle = 0xf057,
    FACheckCircle = 0xf058,
    FAQuestionCircle = 0xf059,
    FAInfoCircle = 0xf05a,
    FACrosshairs = 0xf05b,
    FATimesCircleO = 0xf05c,
    FACheckCircleO = 0xf05d,
    FABan = 0xf05e,
    FAArrowLeft = 0xf060,
    FAArrowRight = 0xf061,
    FAArrowUp = 0xf062,
    FAArrowDown = 0xf063,
    FAMailForward = 0xf064,
    FAShare = 0xf064,
    FAExpand = 0xf065,
    FACompress = 0xf066,
    FAPlus = 0xf067,
    FAMinus = 0xf068,
    FAAsterisk = 0xf069,
    FAExclamationCircle = 0xf06a,
    FAGift = 0xf06b,
    FALeaf = 0xf06c,
    FAFire = 0xf06d,
    FAEye = 0xf06e,
    FAEyeSlash = 0xf070,
    FAWarning = 0xf071,
    FAExclamationTriangle = 0xf071,
    FAPlane = 0xf072,
    FACalendar = 0xf073,
    FARandom = 0xf074,
    FAComment = 0xf075,
    FAMagnet = 0xf076,
    FAChevronUp = 0xf077,
    FAChevronDown = 0xf078,
    FARetweet = 0xf079,
    FAShoppingCart = 0xf07a,
    FAFolder = 0xf07b,
    FAFolderOpen = 0xf07c,
    FAArrowsV = 0xf07d,
    FAArrowsH = 0xf07e,
    FABarChartO = 0xf080,
    FATwitterSquare = 0xf081,
    FAFacebookSquare = 0xf082,
    FACameraRetro = 0xf083,
    FAKey = 0xf084,
    FAGears = 0xf085,
    FACogs = 0xf085,
    FAComments = 0xf086,
    FAThumbsOUp = 0xf087,
    FAThumbsODown = 0xf088,
    FAStarHalf = 0xf089,
    FAHeartO = 0xf08a,
    FASignOut = 0xf08b,
    FALinkedinSquare = 0xf08c,
    FAThumbTack = 0xf08d,
    FAExternalLink = 0xf08e,
    FASignIn = 0xf090,
    FATrophy = 0xf091,
    FAGithubSquare = 0xf092,
    FAUpload = 0xf093,
    FALemonO = 0xf094,
    FAPhone = 0xf095,
    FASquareO = 0xf096,
    FABookmarkO = 0xf097,
    FAPhoneSquare = 0xf098,
    FATwitter = 0xf099,
    FAFacebook = 0xf09a,
    FAGithub = 0xf09b,
    FAUnlock = 0xf09c,
    FACreditCard = 0xf09d,
    FARss = 0xf09e,
    FAHddO = 0xf0a0,
    FABullhorn = 0xf0a1,
    FABell = 0xf0f3,
    FACertificate = 0xf0a3,
    FAHandORight = 0xf0a4,
    FAHandOLeft = 0xf0a5,
    FAHandOUp = 0xf0a6,
    FAHandODown = 0xf0a7,
    FAArrowCircleLeft = 0xf0a8,
    FAArrowCircleRight = 0xf0a9,
    FAArrowCircleUp = 0xf0aa,
    FAArrowCircleDown = 0xf0ab,
    FAGlobe = 0xf0ac,
    FAWrench = 0xf0ad,
    FATasks = 0xf0ae,
    FAFilter = 0xf0b0,
    FABriefcase = 0xf0b1,
    FAArrowsAlt = 0xf0b2,
    FAGroup = 0xf0c0,
    FAUsers = 0xf0c0,
    FAChain = 0xf0c1,
    FALink = 0xf0c1,
    FACloud = 0xf0c2,
    FAFlask = 0xf0c3,
    FACut = 0xf0c4,
    FAScissors = 0xf0c4,
    FACopy = 0xf0c5,
    FAFilesO = 0xf0c5,
    FAPaperclip = 0xf0c6,
    FASave = 0xf0c7,
    FAFloppyO = 0xf0c7,
    FASquare = 0xf0c8,
    FABars = 0xf0c9,
    FAListUl = 0xf0ca,
    FAListOl = 0xf0cb,
    FAStrikethrough = 0xf0cc,
    FAUnderline = 0xf0cd,
    FATable = 0xf0ce,
    FAMagic = 0xf0d0,
    FATruck = 0xf0d1,
    FAPinterest = 0xf0d2,
    FAPinterestSquare = 0xf0d3,
    FAGooglePlusSquare = 0xf0d4,
    FAGooglePlus = 0xf0d5,
    FAMoney = 0xf0d6,
    FACaretDown = 0xf0d7,
    FACaretUp = 0xf0d8,
    FACaretLeft = 0xf0d9,
    FACaretRight = 0xf0da,
    FAColumns = 0xf0db,
    FAUnsorted = 0xf0dc,
    FASort = 0xf0dc,
    FASortDown = 0xf0dd,
    FASortAsc = 0xf0dd,
    FASortUp = 0xf0de,
    FASortDesc = 0xf0de,
    FAEnvelope = 0xf0e0,
    FALinkedin = 0xf0e1,
    FARotateLeft = 0xf0e2,
    FAUndo = 0xf0e2,
    FALegal = 0xf0e3,
    FAGavel = 0xf0e3,
    FADashboard = 0xf0e4,
    FATachometer = 0xf0e4,
    FACommentO = 0xf0e5,
    FACommentsO = 0xf0e6,
    FAFlash = 0xf0e7,
    FABolt = 0xf0e7,
    FASitemap = 0xf0e8,
    FAUmbrella = 0xf0e9,
    FAPaste = 0xf0ea,
    FAClipboard = 0xf0ea,
    FALightbulbO = 0xf0eb,
    FAExchange = 0xf0ec,
    FACloudDownload = 0xf0ed,
    FACloudUpload = 0xf0ee,
    FAUserMd = 0xf0f0,
    FAStethoscope = 0xf0f1,
    FASuitcase = 0xf0f2,
    FABellO = 0xf0a2,
    FACoffee = 0xf0f4,
    FACutlery = 0xf0f5,
    FAFileTextO = 0xf0f6,
    FABuildingO = 0xf0f7,
    FAHospitalO = 0xf0f8,
    FAAmbulance = 0xf0f9,
    FAMedkit = 0xf0fa,
    FAFighterJet = 0xf0fb,
    FABeer = 0xf0fc,
    FAHSquare = 0xf0fd,
    FAPlusSquare = 0xf0fe,
    FAAngleDoubleLeft = 0xf100,
    FAAngleDoubleRight = 0xf101,
    FAAngleDoubleUp = 0xf102,
    FAAngleDoubleDown = 0xf103,
    FAAngleLeft = 0xf104,
    FAAngleRight = 0xf105,
    FAAngleUp = 0xf106,
    FAAngleDown = 0xf107,
    FADesktop = 0xf108,
    FALaptop = 0xf109,
    FATablet = 0xf10a,
    FAMobilePhone = 0xf10b,
    FAMobile = 0xf10b,
    FACircleO = 0xf10c,
    FAQuoteLeft = 0xf10d,
    FAQuoteRight = 0xf10e,
    FASpinner = 0xf110,
    FACircle = 0xf111,
    FAMailReply = 0xf112,
    FAReply = 0xf112,
    FAGithubAlt = 0xf113,
    FAFolderO = 0xf114,
    FAFolderOpenO = 0xf115,
    FASmileO = 0xf118,
    FAFrownO = 0xf119,
    FAMehO = 0xf11a,
    FAGamepad = 0xf11b,
    FAKeyboardO = 0xf11c,
    FAFlagO = 0xf11d,
    FAFlagCheckered = 0xf11e,
    FATerminal = 0xf120,
    FACode = 0xf121,
    FAReplyAll = 0xf122,
    FAMailReplyAll = 0xf122,
    FAStarHalfEmpty = 0xf123,
    FAStarHalfFull = 0xf123,
    FAStarHalfO = 0xf123,
    FALocationArrow = 0xf124,
    FACrop = 0xf125,
    FACodeFork = 0xf126,
    FAUnlink = 0xf127,
    FAChainBroken = 0xf127,
    FAQuestion = 0xf128,
    FAInfo = 0xf129,
    FAExclamation = 0xf12a,
    FASuperscript = 0xf12b,
    FASubscript = 0xf12c,
    FAEraser = 0xf12d,
    FAPuzzlePiece = 0xf12e,
    FAMicrophone = 0xf130,
    FAMicrophoneSlash = 0xf131,
    FAShield = 0xf132,
    FACalendarO = 0xf133,
    FAFireExtinguisher = 0xf134,
    FARocket = 0xf135,
    FAMaxcdn = 0xf136,
    FAChevronCircleLeft = 0xf137,
    FAChevronCircleRight = 0xf138,
    FAChevronCircleUp = 0xf139,
    FAChevronCircleDown = 0xf13a,
    FAHtml5 = 0xf13b,
    FACss3 = 0xf13c,
    FAAnchor = 0xf13d,
    FAUnlockAlt = 0xf13e,
    FABullseye = 0xf140,
    FAEllipsisH = 0xf141,
    FAEllipsisV = 0xf142,
    FARssSquare = 0xf143,
    FAPlayCircle = 0xf144,
    FATicket = 0xf145,
    FAMinusSquare = 0xf146,
    FAMinusSquareO = 0xf147,
    FALevelUp = 0xf148,
    FALevelDown = 0xf149,
    FACheckSquare = 0xf14a,
    FAPencilSquare = 0xf14b,
    FAExternalLinkSquare = 0xf14c,
    FAShareSquare = 0xf14d,
    FACompass = 0xf14e,
    FAToggleDown = 0xf150,
    FACaretSquareODown = 0xf150,
    FAToggleUp = 0xf151,
    FACaretSquareOUp = 0xf151,
    FAToggleRight = 0xf152,
    FACaretSquareORight = 0xf152,
    FAEuro = 0xf153,
    FAEur = 0xf153,
    FAGbp = 0xf154,
    FADollar = 0xf155,
    FAUsd = 0xf155,
    FARupee = 0xf156,
    FAInr = 0xf156,
    FACny = 0xf157,
    FARmb = 0xf157,
    FAYen = 0xf157,
    FAJpy = 0xf157,
    FARuble = 0xf158,
    FARouble = 0xf158,
    FARub = 0xf158,
    FAWon = 0xf159,
    FAKrw = 0xf159,
    FABitcoin = 0xf15a,
    FABtc = 0xf15a,
    FAFile = 0xf15b,
    FAFileText = 0xf15c,
    FASortAlphaAsc = 0xf15d,
    FASortAlphaDesc = 0xf15e,
    FASortAmountAsc = 0xf160,
    FASortAmountDesc = 0xf161,
    FASortNumericAsc = 0xf162,
    FASortNumericDesc = 0xf163,
    FAThumbsUp = 0xf164,
    FAThumbsDown = 0xf165,
    FAYoutubeSquare = 0xf166,
    FAYoutube = 0xf167,
    FAXing = 0xf168,
    FAXingSquare = 0xf169,
    FAYoutubePlay = 0xf16a,
    FADropbox = 0xf16b,
    FAStackOverflow = 0xf16c,
    FAInstagram = 0xf16d,
    FAFlickr = 0xf16e,
    FAAdn = 0xf170,
    FABitbucket = 0xf171,
    FABitbucketSquare = 0xf172,
    FATumblr = 0xf173,
    FATumblrSquare = 0xf174,
    FALongArrowDown = 0xf175,
    FALongArrowUp = 0xf176,
    FALongArrowLeft = 0xf177,
    FALongArrowRight = 0xf178,
    FAApple = 0xf179,
    FAWindows = 0xf17a,
    FAAndroid = 0xf17b,
    FALinux = 0xf17c,
    FADribbble = 0xf17d,
    FASkype = 0xf17e,
    FAFoursquare = 0xf180,
    FATrello = 0xf181,
    FAFemale = 0xf182,
    FAMale = 0xf183,
    FAGittip = 0xf184,
    FASunO = 0xf185,
    FAMoonO = 0xf186,
    FAArchive = 0xf187,
    FABug = 0xf188,
    FAVk = 0xf189,
    FAWeibo = 0xf18a,
    FARenren = 0xf18b,
    FAPagelines = 0xf18c,
    FAStackExchange = 0xf18d,
    FAArrowCircleORight = 0xf18e,
    FAArrowCircleOLeft = 0xf190,
    FAToggleLeft = 0xf191,
    FACaretSquareOLeft = 0xf191,
    FADotCircleO = 0xf192,
    FAWheelchair = 0xf193,
    FAVimeoSquare = 0xf194,
    FATurkishLira = 0xf195,
    FATry = 0xf195,
    FAPlusSquareO = 0xf196
};

@interface NSString (FontAwesome)

+ (NSString *)fa_stringFromFontAwesomeForIcon:(FAIcon)icon;

@end