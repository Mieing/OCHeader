@class NSString, MMTableView;

@interface WCFilterSingleColumnPanel : WCFilterBasePanel <UITableViewDataSource, UITableViewDelegate> {
    MMTableView *m_tableView;
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
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)updateCell:(id)a0 isSelected:(BOOL)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)configSelectedIndex:(id)a0;
- (void)updateHeightWithFilterItems;
- (void).cxx_destruct;

@end
