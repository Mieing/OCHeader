@class NSString, MMTableView;

@interface WCFilterDoubleColumnPanel : WCFilterBasePanel <UITableViewDataSource, UITableViewDelegate> {
    MMTableView *m_tableView;
    double m_rowHeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0 andSection:(id)a1;
- (void)initTableView;
- (void)updateFilterSection:(id)a0;
- (void)clearSelection;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)genBtnWithTitle:(id)a0;
- (void)updateBtn:(id)a0 selected:(BOOL)a1;
- (void)onClickBtn:(id)a0;
- (void)configSelectedIndex:(id)a0;
- (void).cxx_destruct;

@end
