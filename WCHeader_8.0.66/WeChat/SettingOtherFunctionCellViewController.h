@class WCTableViewNormalCellManager, MMTableViewInfo;

@interface SettingOtherFunctionCellViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (weak, nonatomic) WCTableViewNormalCellManager *pluginCellInfo;

+ (void)handleJumpPlugin:(id)a0 params:(id)a1;

- (void)handleMomentsSettings;
- (void)handleTingSettings;
- (void)showDiscoverEntranceView;
- (void)showWechatLabView;
- (void)showPluginsView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupDeepLinkConfig;
- (void).cxx_destruct;

@end
