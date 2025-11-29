@class NSString, WCTableViewNormalCellManager, MMTableViewInfo;

@interface SettingGeneralViewController : MMUIViewController <MMTipsViewControllerDelegate> {
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) WCTableViewNormalCellManager *speakTextCellInfo;
@property (nonatomic) BOOL shouldHighlightSpeakTextItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showChatBackgroundConfig;
- (void)showDiscoverEntranceView;
- (void)showPluginsView;
- (void)showCloudRoamView;
- (void)showClearLocalDataView;
- (void)onShakeToSightSwitch:(id)a0;
- (void)onVoipRecentStatusConfig:(id)a0;
- (void)onLoudModeSwitch:(id)a0;
- (void)onAntiMisoperationSwitch:(id)a0;
- (void)onSwitchSpeakText:(id)a0;
- (void)onSwitchSendButtonInChat:(id)a0;
- (void)onClearData;
- (void)onSetAutoDownloadSight;
- (void)showDeviceListView;
- (void)onShowElderMode;
- (void)onShowLimitedMode;
- (void)savePhotoToLibraryChanged:(id)a0;
- (void)saveVideoToLibraryChanged:(id)a0;
- (void)showSystemAuthorizationPresentView;
- (void)buildNewSettingTableView;
- (void)buildSettingTableView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)showNotificationView;
- (void)doSetPrivateConfig:(unsigned int)a0 on:(BOOL)a1 bitset:(unsigned int)a2;
- (void)onNearModeSwitchChanged:(id)a0;
- (void)handleDarkMode;
- (void)handleLanguageChange;
- (void)handleTranslateLanguage;
- (void)handleFontSizeChange;
- (void)handleChatLog;
- (void)handelEmoticonSetting;
- (void)handleWCDBRecover;
- (void)handleTingSettings;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void)dealloc;
- (void)onLimitedModeChanged;
- (void)onSetElderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end
