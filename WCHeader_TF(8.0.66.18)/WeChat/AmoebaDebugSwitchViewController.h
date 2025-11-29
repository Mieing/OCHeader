@class NSString, UITableView;

@interface AmoebaDebugSwitchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *m_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeSwitchCell:(id)a0 colName:(id)a1 action:(SEL)a2 on:(BOOL)a3;
- (void)onExposeToolSwitchChanged:(id)a0;
- (void)onDebugInfoSwitchChanged:(id)a0;
- (void)onOperateToolSwitchChanged:(id)a0;
- (void)onOperateToolSwitchChanged2:(id)a0;
- (void).cxx_destruct;

@end
