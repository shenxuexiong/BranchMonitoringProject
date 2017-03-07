/* Branch Monitor 
 * Introspection Client
 * Marcus Botacin, 2017
 */

#include "introspection.h"

/* Function OFfsets for wow64user32.dll */
/* Wow64 is required for running x86 under x64 */

static FUNCTION_INTROSPECTION wow_user32[]={
{"gSharedInfo",476384},
{"WaitForRedirectionStartComplete",473327},
{"UserHandleGrantAccess",473227},
{"UpdateWindowTransform",473207},
{"UpdateDefaultDesktopThumbnail",473147},
{"UnregisterUserApiHook",473129},
{"UnregisterSessionPort",473111},
{"UnlockWindowStation",473091},
{"SoundSentry",473013},
{"SignalRedirectionStartComplete",472975},
{"ShutdownBlockReasonDestroy",472955},
{"ShutdownBlockReasonQuery",472935},
{"ShowSystemCursor",472895},
{"SetWindowDisplayAffinity",472835},
{"SetWindowCompositionTransition",472815},
{"SetWindowBand",472795},
{"SetShellWindowEx",472715},
{"SetProcessRestrictionExemption",472677},
{"SetUserObjectInformationA",472657},
{"SetUserObjectInformationW",472657},
{"SetMirrorRendering",472637},
{"SetMenuContextHelpId",472597},
{"SetInternalWindowPos",472577},
{"SetImmersiveBackgroundWindow",472557},
{"SetCursorContents",472457},
{"SetClassWord",472437},
{"ResolveDesktopForWOW",472297},
{"RemoveClipboardFormatListener",472277},
{"RegisterTasklist",472237},
{"RegisterSessionPort",472217},
{"RegisterServicesProcess",472197},
{"RegisterRawInputDevices",472177},
{"RegisterPointerDeviceNotifications",472137},
{"RegisterErrorReportingDialog",472117},
{"RegisterBSDRWindow",472077},
{"RealChildWindowFromPoint",472037},
{"QuerySendMessage",472017},
{"QueryBSDRWindow",471979},
{"PrintWindow",471939},
{"PaintMonitor",471919},
{"OpenThreadDesktop",471899},
{"OpenInputDesktop",471879},
{"MenuItemFromPoint",471799},
{"SetMagnificationLensCtxInformation",471779},
{"GetMagnificationLensCtxInformation",471759},
{"ControlMagnification",471739},
{"LockWorkStation",471683},
{"LockWindowStation",471663},
{"IsTouchWindow",471603},
{"IsMouseInPointerEnabled",471567},
{"InjectTouchInput",471527},
{"InitializeTouchInjection",471487},
{"ImpersonateDdeClientWindow",471447},
{"HungWindowFromGhostWindow",471387},
{"HiliteMenuItem",471367},
{"GhostWindowFromHungWindow",471347},
{"GetWindowRgnEx",471327},
{"GetWindowMinimizeRect",471307},
{"GetWindowFeedbackSetting",471287},
{"GetWindowDisplayAffinity",471267},
{"GetWindowCompositionInfo",471247},
{"GetUpdatedClipboardFormats",471207},
{"GetTopLevelWindow",471147},
{"GetRegisteredRawInputDevices",471127},
{"GetRawInputDeviceList",471107},
{"GetRawInputData",471067},
{"GetPriorityClipboardFormat",471027},
{"GetPointerDeviceCursors",471007},
{"GetPointerCursorId",470987},
{"GetMouseMovePointsEx",470967},
{"GetMenuItemRect",470947},
{"GetListBoxInfo",470907},
{"GetLayeredWindowAttributes",470887},
{"GetInternalWindowPos",470847},
{"GetInputLocaleInfo",470827},
{"GetGuiResources",470787},
{"GetGestureConfig",470727},
{"GetDesktopID",470667},
{"GetClipboardViewer",470649},
{"GetClipboardAccessToken",470629},
{"GetClipCursor",470609},
{"GetCIMSSM",470589},
{"GetAutoRotationState",470569},
{"FrostCrashedWindow",470549},
{"FlashWindowEx",470529},
{"DwmValidateWindow",470449},
{"DwmStopRedirection",470431},
{"DwmStartRedirection",470411},
{"DwmGetRemoteSessionOcclusionState",470393},
{"DwmGetRemoteSessionOcclusionEvent",470375},
{"DrawAnimatedRects",470295},
{"DragObject",470275},
{"DragDetect",470255},
{"DoSoundDisconnect",470237},
{"DoSoundConnect",470219},
{"SkipPointerFrameMessages",470179},
{"ChildWindowFromPointEx",470099},
{"CheckWindowThreadDesktop",470079},
{"CheckProcessSession",470059},
{"CheckProcessForClipboardAccess",470039},
{"CalculatePopupWindowPosition",469939},
{"BlockInput",469899},
{"AddClipboardFormatListener",469879},
{"ActivateKeyboardLayout",469839},
{"ShowWindowAsync",469819},
{"LockWindowUpdate",469759},
{"DeviceEventWorker",469342},
{"EndTask",469302},
{"VTagOutput",469244},
{"VRipOutput",469236},
{"DrawFrame",462056},
{"InvertRect",459186},
{"SubtractRect",458823},
{"AlignRects",458398},
{"DisplayConfigSetDeviceInfo",457136},
{"QueryDisplayConfig",457092},
{"SetDisplayConfig",457051},
{"GetDisplayConfigBufferSizes",457016},
{"IsCharAlphaA",456999},
{"IsCharAlphaNumericA",456982},
{"CharUpperBuffA",456965},
{"CharLowerBuffA",456948},
{"CharPrevExA",456931},
{"CharNextExA",456914},
{"IsCharUpperA",456897},
{"IsCharLowerA",456880},
{"IsCharAlphaNumericW",456863},
{"IsCharUpperW",456846},
{"IsCharLowerW",456829},
{"IMPSetIMEA",455238},
{"IMPSetIMEW",455221},
{"IMPQueryIMEA",455204},
{"IMPQueryIMEW",455187},
{"IMPGetIMEA",455170},
{"IMPGetIMEW",455153},
{"SendIMEMessageExA",455136},
{"SendIMEMessageExW",455119},
{"WINNLSGetEnableStatus",455102},
{"WINNLSEnableIME",455085},
{"WINNLSGetIMEHotkey",455075},
{"GetAltTabInfo",454476},
{"GetAltTabInfoA",454476},
{"RealGetWindowClass",454348},
{"RealGetWindowClassA",454348},
{"DrawCaptionTempA",454194},
{"CallMsgFilter",453971},
{"CallMsgFilterA",453971},
{"ChangeDisplaySettingsExA",453477},
{"ChangeDisplaySettingsA",453436},
{"VkKeyScanExA",453301},
{"VkKeyScanA",453235},
{"SendMessageCallbackA",453134},
{"MapVirtualKeyExA",452979},
{"GetKeyboardLayoutNameA",452914},
{"GetKeyNameTextA",452806},
{"GetRawInputDeviceInfoA",452037},
{"GetWindowModuleFileName",451964},
{"GetWindowModuleFileNameA",451964},
{"BroadcastSystemMessage",451924},
{"BroadcastSystemMessageA",451924},
{"BroadcastSystemMessageExA",451883},
{"ModifyMenuA",451809},
{"AppendMenuA",451742},
{"InsertMenuA",451668},
{"InsertMenuItemA",451603},
{"SetMenuItemInfoA",451538},
{"GetMenuStringA",451453},
{"GetDlgItemTextA",451302},
{"DdePostAdvise",450188},
{"DdeAbandonTransaction",449820},
{"DdeSetUserHandle",449633},
{"DdeQueryConvInfo",449202},
{"DdeClientTransaction",447508},
{"EnableSessionForMMCSS",447225},
{"IsInDesktopWindowBand",447096},
{"CreateWindowIndirect",447008},
{"CreateSystemThreads",445279},
{"IsHungAppWindow",445249},
{"AnyPopup",445163},
{"_UserTestTokenForInteractive",444983},
{"EvaluateProximityToPolygon",442181},
{"DwmGetDxSharedSurface",431731},
{"IsSETEnabled",431161},
{"GetReasonTitleFromReasonCode",430910},
{"DestroyReasons",430829},
{"BuildReasonArray",430353},
{"ReasonCodeNeedsBugID",427944},
{"ReasonCodeNeedsComment",427921},
{"EnterReaderModeHelper",427787},
{"SetLastErrorEx",425911},
{"SetSysColorsTemp",425615},
{"OemKeyScan",425516},
{"OemToCharBuffW",425456},
{"OemToCharW",425382},
{"CharToOemBuffW",425314},
{"CharToOemW",425224},
{"OemToCharBuffA",425153},
{"OemToCharA",425088},
{"CharToOemA",425023},
{"PaintDesktop",424481},
{"UnregisterTouchWindow",424337},
{"RegisterTouchWindow",424310},
{"UnregisterSuspendResumeNotification",424214},
{"RegisterSuspendResumeNotification",424132},
{"keybd_event",421661},
{"mouse_event",421593},
{"SetSystemCursor",421401},
{"SetWindowStationUser",421334},
{"ToUnicodeEx",421282},
{"InternalGetWindowIcon",421266},
{"SetWindowRgnEx",421219},
{"DrawCaption",420985},
{"RegisterUserApiHook",420899},
{"UpdatePerUserSystemParameters",420384},
{"SetSysColors",420086},
{"MB_GetString",419129},
{"MessageBoxIndirectA",418191},
{"MessageBoxTimeoutA",417916},
{"MessageBoxTimeoutW",417783},
{"MessageBoxExW",417747},
{"MessageBoxExA",417711},
{"MessageBoxW",417676},
{"MessageBoxA",417641},
{"DrawStateA",415910},
{"CheckMenuRadioItem",414478},
{"DrawMenuBarTemp",414424},
{"GetMenuContextHelpId",414320},
{"GetMenuCheckMarkDimensions",414171},
{"ChangeMenuA",414001},
{"ChangeMenuW",413831},
{"SetMenuInfo",413797},
{"CreateMDIWindowA",413744},
{"TileWindows",413043},
{"CascadeWindows",412237},
{"ScrollChildren",410199},
{"GetMagnificationDesktopMagnification",406623},
{"SetMagnificationDesktopMagnification",406550},
{"GetMagnificationDesktopColorEffect",406433},
{"SetMagnificationDesktopColorEffect",406329},
{"DlgDirSelectExW",401295},
{"DlgDirSelectExA",401185},
{"DlgDirListW",400680},
{"DlgDirListA",400464},
{"DdeCmpStringHandles",376628},
{"DdeKeepStringHandle",376487},
{"DdeFreeStringHandle",376337},
{"DdeQueryStringW",376046},
{"DdeQueryStringA",376002},
{"DdeCreateStringHandleW",375820},
{"DdeCreateStringHandleA",375780},
{"WinHelpW",375162},
{"DdeFreeDataHandle",373300},
{"DdeUnaccessData",373234},
{"DdeAccessData",373121},
{"DdeGetData",372840},
{"DdeAddData",372552},
{"DdeCreateDataHandle",372038},
{"GetRawInputBuffer",371236},
{"PrivateExtractIconExW",370994},
{"PrivateExtractIconsA",370836},
{"PrivateExtractIconExA",370687},
{"GetNextDlgGroupItem",340566},
{"ReuseDDElParam",340188},
{"FreeDDElParam",340103},
{"UnpackDDElParam",339930},
{"PackDDElParam",339826},
{"DdeImpersonateClient",334407},
{"DdeGetLastError",334340},
{"DdeNameService",333796},
{"DdeUninitialize",333502},
{"DdeInitializeW",332989},
{"DdeInitializeA",332946},
{"UserLpkPSMTextOut",332465},
{"GetTabbedTextExtentA",332303},
{"GetTabbedTextExtentW",332259},
{"TabbedTextOutA",332109},
{"TabbedTextOutW",332060},
{"UserLpkTabbedTextOut",331551},
{"ConsoleControl",331272},
{"CsrBroadcastSystemMessageExW",331154},
{"ExitWindowsEx",330865},
{"CancelShutdown",330791},
{"DisplayExitWindowsWarnings",329886},
{"RecordShutdownReason",328592},
{"GetAltTabInfoW",328175},
{"DrawCaptionTempW",328059},
{"ChangeDisplaySettingsExW",327792},
{"ChangeDisplaySettingsW",327751},
{"GetKeyNameTextW",327735},
{"DdeDisconnectList",320093},
{"DdeDisconnect",319980},
{"DdeQueryNextServer",319716},
{"DdeGetQualityOfService",318532},
{"DdeSetQualityOfService",318521},
{"DdeReconnect",317857},
{"DdeConnectList",317243},
{"DdeConnect",317078},
{"DlgDirListComboBoxW",313736},
{"DlgDirListComboBoxA",313520},
{"DlgDirSelectComboBoxExW",313409},
{"DlgDirSelectComboBoxExA",313313},
{"CloseTouchInputHandle",301739},
{"GetTouchInputInfo",301689},
{"CreateIconFromResource",300427},
{"LookupIconIdFromDirectory",300317},
{"GetIconInfoExA",300057},
{"GetIconInfoExW",299875},
{"CreateIcon",299765},
{"CreateCursor",299644},
{"DialogBoxParamA",298846},
{"DialogBoxIndirectParamA",298810},
{"CopyAcceleratorTableA",298721},
{"CreateAcceleratorTableA",298648},
{"UnregisterPointerInputTarget",298567},
{"RegisterPointerInputTarget",298540},
{"GetPointerFramePenInfoHistory",298501},
{"GetPointerFramePenInfo",298455},
{"GetPointerPenInfoHistory",298409},
{"GetPointerPenInfo",298357},
{"GetPointerFrameTouchInfoHistory",298315},
{"GetPointerFrameInfo",298270},
{"GetPointerInfoHistory",298225},
{"DefRawInputProc",298155},
{"IsWow64Message",298115},
{"SetMessageExtraInfo",298091},
{"MenuWindowProcA",298019},
{"MenuWindowProcW",297947},
{"RegisterLogonProcess",296703},
{"CtxInitUser32",296618},
{"GetRawInputDeviceInfoW",295888},
{"GetWindowModuleFileNameW",295815},
{"BroadcastSystemMessageW",295775},
{"BroadcastSystemMessageExW",295734},
{"ModifyMenuW",295660},
{"AppendMenuW",295593},
{"ShutdownBlockReasonCreate",295110},
{"GetSendMessageReceiver",295086},
{"SetMessageQueue",295075},
{"GetKBCodePage",295064},
{"RegisterFrostWindow",295037},
{"RegisterGhostWindow",295010},
{"DisableProcessWindowsGhosting",294997},
{"AllowForegroundActivation",294984},
{"SetProcessDefaultLayout",294960},
{"GetProcessDefaultLayout",294936},
{"SetDebugErrorLevel",294538},
{"UnloadKeyboardLayout",294498},
{"LoadKeyboardLayoutA",294363},
{"LoadKeyboardLayoutW",294332},
{"LoadKeyboardLayoutEx",294290},
{"UnhookWindowsHook",290413},
{"TileChildWindows",290374},
{"SwapMouseButton",290350},
{"ShowStartGlass",290326},
{"LockSetForegroundWindow",290302},
{"SetDoubleClickTime",290278},
{"SetCursorPos",290251},
{"RegisterSystemThread",290221},
{"ReplyMessage",290197},
{"GetWindowContextHelpId",290146},
{"SetTaskmanWindow",290122},
{"GetTaskmanWindow",290036},
{"SetProgmanWindow",290012},
{"GetProgmanWindow",289926},
{"SetShellWindow",289901},
{"OpenIcon",289850},
{"NotifyOverlayWindow",289823},
{"LoadLocalFonts",289808},
{"LoadRemoteFonts",289785},
{"IsQueueAttached",289772},
{"DwmLockScreenUpdates",289748},
{"GetUnpredictedMessagePos",289735},
{"GetKeyboardType",289602},
{"GetInputDesktop",289387},
{"FlashWindow",289324},
{"EnumClipboardFormats",289292},
{"CloseWindow",289217},
{"CascadeChildWindows",289178},
{"DeferWindowPosAndBand",289130},
{"ArrangeIconicWindows",289106},
{"UserRegisterWowHandlers",288511},
{"SwitchDesktopWithFade",288293},
{"SwitchDesktop",288267},
{"OpenDesktopW",288220},
{"CreateDesktopW",288179},
{"CreateDesktopExW",288100},
{"CreateDesktopA",288059},
{"CreateDesktopExA",287825},
{"OpenWindowStationW",287677},
{"CreateWindowStationW",287630},
{"CreateWindowStationA",287550},
{"GetWinStationInfo",285307},
{"SetUserObjectSecurity",285259},
{"GetUserObjectSecurity",285205},
{"GrayStringW",285157},
{"GrayStringA",285109},
{"WaitForInputIdle",284263},
{"SwitchToThisWindow",284236},
{"ToAsciiEx",284083},
{"SetDeskWallpaper",284055},
{"ChildWindowFromPoint",283879},
{"SetWindowsHookW",283699},
{"SetWindowsHookA",283672},
{"CloseGestureInfoHandle",283218},
{"GetGestureExtraArgs",283197},
{"GetGestureInfo",283063},
{"EnumDesktopsW",282064},
{"EnumWindowStationsW",282035},
{"EnumPropsExW",282005},
{"EnumPropsExA",281975},
{"EnumPropsW",281946},
{"EnumPropsA",281917},
{"EnumDesktopWindows",281418},
{"DdeEnableCallback",278870},
{"LoadCursorFromFileA",261972},
{"LoadCursorFromFileW",261937},
{"CliImmSetHotKey",261099},
{"InsertMenuW",193910},
{"GetMenuDefaultItem",193584},
{"OpenDesktopA",193399},
{"OpenWindowStationA",193065},
{"EnumWindowStationsA",192695},
{"CloseWindowStation",192675},
{"SetProcessWindowStation",192635},
{"CloseDesktop",192615},
{"FindWindowExA",192582},
{"EnumDesktopsA",192383},
{"WinHelpA",190478},
{"IsDialogMessage",189821},
{"IsDialogMessageA",189821},
{"wvsprintfA",189261},
{"wsprintfA",189046},
{"CreateDialogParamA",187804},
{"ShowOwnedPopups",187712},
{"DrawFrameControl",186193},
{"CheckMenuItem",179201},
{"DefFrameProcA",179165},
{"EditWndProc",173500},
{"DefMDIChildProcA",169491},
{"CreateMDIWindowW",168439},
{"CharToOemBuffA",168152},
{"LoadMenuA",167885},
{"SetSystemMenu",165568},
{"TranslateMDISysAccel",163871},
{"DefMDIChildProcW",163795},
{"DefFrameProcW",162022},
{"SetMenuItemBitmaps",161604},
{"TrackPopupMenuEx",161460},
{"TrackPopupMenu",161424},
{"GetMenuInfo",161309},
{"RegisterClassExA",161209},
{"CreatePopupMenu",161136},
{"DrawMenuBar",161101},
{"PaintMenuBar",161070},
{"SetMenuDefaultItem",161050},
{"SetMenuItemInfoW",160985},
{"PrivateExtractIconsW",158336},
{"CreateIconFromResourceEx",158068},
{"GetMenuStringW",157718},
{"GetMenuState",157513},
{"GetMenuItemID",157356},
{"CharPrevA",157339},
{"LoadImageA",157287},
{"LoadStringA",157200},
{"GetClassInfoExA",156638},
{"GetClassInfoA",156565},
{"UpdateLayeredWindow",156470},
{"MapVirtualKeyA",156431},
{"SetCaretBlinkTime",156407},
{"GetClassNameA",156102},
{"ShowCursor",156078},
{"TranslateAccelerator",156007},
{"TranslateAcceleratorA",156007},
{"GetInputState",155963},
{"GetUpdateRgn",155850},
{"ExcludeUpdateRgn",155815},
{"GetTopWindow",155646},
{"PeekMessageA",155068},
{"SetDisplayAutoRotationPreferences",154892},
{"GetDisplayAutoRotationPreferences",154872},
{"CreateWindowInBand",154807},
{"RegisterDeviceNotificationW",154488},
{"GetPointerDeviceRects",154090},
{"GetPointerInfo",154019},
{"CharUpperW",153969},
{"CharLowerW",153884},
{"EnumDisplaySettingsExA",153322},
{"EnumDisplaySettingsA",153278},
{"GetWindowRgn",153052},
{"SetClassLongW",152939},
{"wsprintfW",152180},
{"RegisterDeviceNotificationA",151902},
{"RegisterShellHookWindow",151878},
{"SetMenu",151766},
{"UnregisterDeviceNotification",151647},
{"DeregisterShellHookWindow",151623},
{"wvsprintfW",150934},
{"LoadBitmapW",148098},
{"FrameRect",148061},
{"GetScrollRange",147966},
{"ScrollWindowEx",147764},
{"SetScrollPos",147688},
{"CreateMenu",147272},
{"EndMenu",147235},
{"InvalidateRgn",147208},
{"OpenClipboard",147144},
{"CloseClipboard",147126},
{"WindowFromPhysicalPoint",147040},
{"GetPhysicalCursorPos",147014},
{"SetPhysicalCursorPos",146987},
{"PhysicalToLogicalPoint",146967},
{"GetClipboardOwner",146949},
{"GetClipboardSequenceNumber",146931},
{"IsClipboardFormatAvailable",146911},
{"SendMessageTimeoutA",146865},
{"GetClassLongA",146737},
{"CopyIcon",146663},
{"CreateIconIndirect",146134},
{"SendNotifyMessageA",146081},
{"AdjustWindowRect",145961},
{"EnableMenuItem",145617},
{"SetScrollRange",144824},
{"SystemParametersInfoA",144676},
{"PrivateRegisterICSProc",143301},
{"ToUnicode",143105},
{"ToAscii",143041},
{"ScrollDC",142999},
{"GetWindowWord",142798},
{"EvaluateProximityToRect",142552},
{"GetRawPointerDeviceData",142532},
{"GetPointerType",142512},
{"GetPointerDeviceProperties",142492},
{"GetPointerTouchInfoHistory",142443},
{"GetPointerFrameTouchInfo",142146},
{"PackTouchHitTestingProximityEvaluation",142040},
{"GetPointerTouchInfo",141903},
{"GetPointerFrameInfoHistory",141864},
{"GetPointerDevice",141804},
{"SetWindowContextHelpId",141314},
{"SoftModalMessageBox",136929},
{"MessageBoxIndirectW",136332},
{"CheckRadioButton",132565},
{"MapVirtualKeyExW",132291},
{"DialogBoxParamW",131961},
{"GetUserObjectInformationA",131074},
{"SetDlgItemInt",130598},
{"GetDlgItemInt",130104},
{"EnableScrollBar",129961},
{"AnimateWindow",127677},
{"GetClipboardFormatNameA",127569},
{"GetClassWord",127364},
{"CharLowerA",127242},
{"DrawIcon",127187},
{"ScrollWindow",127125},
{"SetClipboardData",124806},
{"EmptyClipboard",124768},
{"VkKeyScanExW",124741},
{"SetClipboardViewer",124565},
{"GetClipboardData",124296},
{"RegisterMessagePumpHook",124106},
{"UnregisterMessagePumpHook",123803},
{"SetClassLongA",122789},
{"CreateDialogIndirectParamA",122656},
{"SendDlgItemMessageA",122588},
{"DrawTextExA",122200},
{"DrawTextA",122118},
{"GetLastActivePopup",121799},
{"SetDlgItemTextA",121752},
{"ClipCursor",121552},
{"SetPropA",121480},
{"LoadAcceleratorsA",121441},
{"RemovePropA",121305},
{"GetPropA",121198},
{"LookupIconIdFromDirectoryEx",121134},
{"DrawEdge",119209},
{"GetCursorFrameInfo",119062},
{"GetNextDlgTabItem",118929},
{"SendDlgItemMessageW",118861},
{"CheckDlgButton",118375},
{"CreateDialogIndirectParamW",118250},
{"MessageBeep",118226},
{"IsDlgButtonChecked",118173},
{"MapDialogRect",117614},
{"GetDlgItemTextW",117275},
{"SetDlgItemTextW",117228},
{"EndDialog",116885},
{"DialogBoxIndirectParamW",116835},
{"DialogBoxIndirectParamAorW",116772},
{"DrawFocusRect",116399},
{"SetWindowWord",115799},
{"CountClipboardFormats",115781},
{"GetOpenClipboardWindow",115763},
{"GetMenuItemInfoA",115449},
{"PostThreadMessageA",115363},
{"SendMessageCallbackW",115294},
{"SetWindowsHookExA",115244},
{"GetWindowTextLengthA",114831},
{"InternalGetWindowText",114769},
{"LoadBitmapA",114577},
{"GetWindowTextA",114428},
{"CharLowerBuffW",114411},
{"BringWindowToTop",114306},
{"SetWindowTextA",114232},
{"SetLayeredWindowAttributes",109248},
{"RegisterHotKey",108868},
{"SetKeyboardState",108848},
{"CreateDialogParamW",108743},
{"MapVirtualKeyW",108274},
{"UnregisterHotKey",108094},
{"CreateDialogIndirectParamAorW",107078},
{"DrawStateW",105744},
{"SetWindowPlacement",103989},
{"IsTopLevelWindow",103969},
{"MonitorFromPoint",103750},
{"AdjustWindowRectEx",103712},
{"CallWindowProcA",102912},
{"LoadIconA",102872},
{"CharNextW",102832},
{"GetSystemMenu",102783},
{"DeferWindowPos",102474},
{"EndDeferWindowPosEx",102454},
{"EndDeferWindowPos",102430},
{"BeginDeferWindowPos",102396},
{"SetActiveWindow",102376},
{"SendMessageA",102280},
{"ChangeClipboardChain",102087},
{"IsMenu",102027},
{"GetScrollBarInfo",102007},
{"GetMenuBarInfo",101972},
{"GetWindowTextLengthW",101819},
{"GetUpdateRect",101739},
{"GetComboBoxInfo",101243},
{"FindWindowExW",101194},
{"VkKeyScanW",100941},
{"SendInput",100863},
{"TrackMouseEvent",100446},
{"GetSysColorBrush",100385},
{"GetWindowTextW",100237},
{"GetMenuItemInfoW",98444},
{"GetSubMenu",97820},
{"DeleteMenu",97425},
{"GetMenuItemCount",97330},
{"GetMessageExtraInfo",97167},
{"SetCapture",97147},
{"ReleaseCapture",97134},
{"WindowFromPoint",97114},
{"GetAsyncKeyState",96789},
{"EnumWindows",96658},
{"EnableWindow",96353},
{"GetWindowInfo",95796},
{"InSendMessage",95634},
{"GetMessageA",95330},
{"HideCaret",95236},
{"ShowCaret",95216},
{"CalcMenuBar",95161},
{"IsZoomed",95066},
{"InflateRect",95002},
{"UpdateWindow",94668},
{"GetTitleBarInfo",94580},
{"UserRealizePalette",94556},
{"GetDlgCtrlID",94477},
{"SendMessageTimeoutW",94431},
{"RealGetWindowClassW",94127},
{"MonitorFromRect",93924},
{"MonitorFromWindow",93277},
{"GetMonitorInfoA",93020},
{"GetMonitorInfoW",92848},
{"UpdateLayeredWindowIndirect",92616},
{"SetWindowRgn",92474},
{"DrawTextW",91523},
{"DrawTextExW",91402},
{"IsDialogMessageW",88886},
{"CallMsgFilterW",88733},
{"GetCaretPos",88169},
{"GetDialogBaseUnits",87842},
{"GetCaretBlinkTime",87725},
{"GetLastInputInfo",87682},
{"GetScrollInfo",87300},
{"EnumDisplayDevicesA",86579},
{"DrawIconEx",86418},
{"GetIconInfo",86337},
{"GetMenu",85897},
{"GetScrollPos",85079},
{"ShowScrollBar",84840},
{"SetScrollInfo",84691},
{"RemoveMenu",82559},
{"InsertMenuItemW",82451},
{"IsGUIThread",82385},
{"SetWindowFeedbackSetting",82365},
{"CreateDCompositionHwndTarget",82345},
{"EnableMouseInPointer",82325},
{"SetThreadDesktop",82305},
{"GetPointerDevices",82285},
{"GetKeyboardLayoutNameW",82184},
{"GetClipboardFormatNameW",82156},
{"EnumDisplayDevicesW",81919},
{"EnumDisplaySettingsExW",81654},
{"EnumDisplaySettingsW",81616},
{"DisplayConfigGetDeviceInfo",81567},
{"RegisterPowerSettingNotification",81460},
{"LoadAcceleratorsW",81086},
{"CreateAcceleratorTableW",80842},
{"RegisterClassA",80599},
{"LoadMenuIndirectA",79701},
{"LoadMenuIndirectW",79701},
{"CreateWindowExA",79348},
{"SetWinEventHook",74881},
{"ChangeWindowMessageFilter",74825},
{"GetCurrentInputMessageSource",73758},
{"GetCursorInfo",73738},
{"GetCursor",73725},
{"LoadCursorA",73685},
{"GetShellWindow",72954},
{"LoadImageW",72910},
{"EnumDisplayMonitors",72751},
{"WCSToMBEx",72511},
{"SetProcessDPIAware",72474},
{"GetKeyboardLayoutList",72402},
{"CopyImage",72353},
{"DestroyCursor",72309},
{"DestroyIcon",72309},
{"SetPropW",72241},
{"CharUpperBuffW",72056},
{"SetGestureConfig",72036},
{"AllowSetForegroundWindow",72012},
{"User32InitializeImmEntryTable",70931},
{"InitializeLpkHooks",66075},
{"UserClientDllInitialize",64398},
{"UnregisterClassW",64028},
{"RegisterClassW",63821},
{"PostMessageA",61403},
{"DispatchMessageA",61285},
{"GetWindowPlacement",61220},
{"PostThreadMessageW",60874},
{"ShowWindow",60499},
{"IsChild",60233},
{"IsIconic",60138},
{"GetParent",59904},
{"DestroyDCompositionHwndTarget",59864},
{"SetWindowLongA",59779},
{"UnhookWindowsHookEx",59744},
{"UnregisterPowerSettingNotification",59692},
{"DestroyAcceleratorTable",59602},
{"UnregisterClassA",59231},
{"PostQuitMessage",58920},
{"UnhookWinEvent",58900},
{"CopyAcceleratorTableW",58788},
{"LoadMenuW",58741},
{"GetWindowRgnBox",58673},
{"GetClassInfoW",57826},
{"CharPrevW",57709},
{"IsCharAlphaW",57692},
{"SetParent",57515},
{"DestroyMenu",57495},
{"LoadIconW",56997},
{"RegisterClassExW",56911},
{"GetClassInfoExW",56578},
{"CreateWindowExW",54325},
{"DestroyWindow",53150},
{"IsServerSideWindow",52614},
{"RemovePropW",52529},
{"SetWindowLongW",52499},
{"CharUpperA",52318},
{"FindWindowA",52266},
{"EnumThreadWindows",51546},
{"EnumChildWindows",51365},
{"SetWindowsHookExW",51076},
{"RegisterTouchHitTestingWindow",50876},
{"GetDlgItem",50668},
{"ValidateRect",50548},
{"SetCaretPos",50471},
{"CreateCaret",50451},
{"GetAppCompatFlags",50403},
{"MBToWCSExt",50307},
{"MBToWCSEx",50162},
{"FindWindowW",50132},
{"IsImmersiveProcess",49966},
{"SendNotifyMessageW",49913},
{"LoadStringW",49879},
{"RegisterClipboardFormatA",49800},
{"RegisterWindowMessageA",49800},
{"ClientThreadSetup",49234},
{"RegisterClipboardFormatW",49151},
{"RegisterWindowMessageW",49151},
{"GetProcessUIContextInformation",49131},
{"GetThreadDesktop",49111},
{"GetAppCompatFlags2",49003},
{"UnionRect",48813},
{"ClientToScreen",48656},
{"CallWindowProcW",48413},
{"ChangeWindowMessageFilterEx",48288},
{"SetCursor",47963},
{"GetDoubleClickTime",47945},
{"GetWindowCompositionAttribute",47925},
{"WindowFromDC",47901},
{"InvalidateRect",47881},
{"GetWindowRect",47761},
{"IsRectEmpty",47702},
{"PtInRect",47649},
{"GetMessageW",47277},
{"CharNextA",47135},
{"AttachThreadInput",47090},
{"SetForegroundWindow",47066},
{"LogicalToPhysicalPoint",46964},
{"CallNextHookEx",46643},
{"FillRect",46415},
{"GetDesktopWindow",46330},
{"IsWindowInDestroy",46223},
{"GetWindow",45944},
{"LoadCursorW",45516},
{"SetWindowPos",44641},
{"SetFocus",44621},
{"GetForegroundWindow",44583},
{"GetClassNameW",44487},
{"MoveWindow",44447},
{"IsWindowRedirectedForPrint",44381},
{"GetDCEx",44361},
{"InSendMessageEx",44162},
{"SendMessageW",43604},
{"SetWindowCompositionAttribute",43167},
{"GetClassLongW",42257},
{"GetSystemMetrics",41950},
{"GetProcessWindowStation",41711},
{"GetWindowDC",41691},
{"GetUserObjectInformationW",41671},
{"IsProcessDPIAware",41658},
{"GetWindowBand",41627},
{"GetGUIThreadInfo",41607},
{"GetPropW",41431},
{"CheckDBCSEnabledExt",41331},
{"ReleaseDC",41200},
{"GetDC",41180},
{"ValidateRgn",40974},
{"SetThreadInputBlocked",40954},
{"DestroyCaret",40918},
{"GetActiveWindow",40905},
{"GetMessageTime",40892},
{"IsWindowUnicode",40846},
{"GetKeyboardState",40789},
{"ScreenToClient",40605},
{"TranslateAcceleratorW",40542},
{"IsWindowVisible",40356},
{"MapWindowPoints",40021},
{"GetCapture",39991},
{"GetMessagePos",39978},
{"GetKeyState",39808},
{"EqualRect",39758},
{"CopyRect",39706},
{"NotifyWinEvent",39558},
{"SetWindowTextW",39492},
{"SetRectEmpty",39460},
{"GetClientRect",39315},
{"MsgWaitForMultipleObjects",39185},
{"IsThreadMessageQueueAttached",39161},
{"MsgWaitForMultipleObjectsEx",38719},
{"IsWinEventHookInstalled",38657},
{"IsWindowEnabled",38556},
{"BeginPaint",37794},
{"EndPaint",37774},
{"SetRect",37723},
{"GetSysColor",37685},
{"IntersectRect",37472},
{"SystemParametersInfoW",37323},
{"GetAncestor",36416},
{"GetWindowThreadProcessId",36316},
{"OffsetRect",36275},
{"IsThreadDesktopComposited",36201},
{"GetWindowLongW",36103},
{"RedrawWindow",35842},
{"GetQueueStatus",35762},
{"PostMessageW",35496},
{"DispatchMessageW",35414},
{"TranslateMessageEx",35345},
{"TranslateMessage",35297},
{"GetKeyboardLayout",32865},
{"GetFocus",32852},
{"GetCursorPos",32806},
{"SetTimer",32632},
{"SetCoalescableTimer",32612},
{"KillTimer",32592},
{"IsWindow",31955},
{"WaitMessage",31937},
{"GetWindowLongA",31841},
{"PeekMessageW",31107},
{"gapfnScSendMessage",29432},
{"DefWindowProcW",29401},
{"DefWindowProcA",29374},
{"DefDlgProcW",29347},
{"DefDlgProcA",29320},
{"Unknown",0},
};