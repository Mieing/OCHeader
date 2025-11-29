@class DelaySwitchSettingLogic;

@interface SettingNotificationDetailViewController : NewSettingBaseViewController {
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property (copy, nonatomic) id /* block */ selectionHandler;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long previousSelectedIndex;
@property (nonatomic) BOOL isSelectionChanged;

- (id)initWithSelectionHandler:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)reloadTableData;
- (void)onSelectAtCell:(id)a0;
- (id)genCellWithTitle:(id)a0 index:(long long)a1;
- (unsigned int)indexToSetting:(long long)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
