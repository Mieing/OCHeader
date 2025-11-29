@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingVoipCellViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (nonatomic) unsigned long long settingViewType;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;
@property (readonly, nonatomic) long long from;

- (void)voipDoubleLinkSettingChanged:(id)a0;
- (void)reportOperate:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
