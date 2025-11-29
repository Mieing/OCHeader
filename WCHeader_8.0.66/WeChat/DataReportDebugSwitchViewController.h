@interface DataReportDebugSwitchViewController : SettingBaseViewController

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeSwitchCell:(id)a0 colName:(id)a1 action:(SEL)a2 on:(BOOL)a3;
- (void)onExposeToolSwitchChanged:(id)a0;
- (void)onDebugInfoSwitchChanged:(id)a0;
- (void)onOperateToolSwitchChanged:(id)a0;
- (void)onOperateToolSwitchChanged2:(id)a0;

@end
