@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingChatCellViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;

- (void)showChatBackgroundConfig;
- (void)onLoudModeSwitch:(id)a0;
- (void)onSwitchSendButtonInChat:(id)a0;
- (void)saveIntelligentImgChanged:(id)a0;
- (void)silentDownloadChanged;
- (void)saveCleanOriginMsgChanged:(id)a0;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
