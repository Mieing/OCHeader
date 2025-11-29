@class NSString, NSArray, MMUIView, MMTableView;
@protocol StorageFilterPanelDelegate;

@interface StorageFilterPanel : MMUIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *m_filters;
    MMTableView *m_tableView;
    MMUIView *m_bottomBar;
    double m_maxHeight;
    double m_headerHeight;
    double m_buttonWidth;
}

@property (weak, nonatomic) id<StorageFilterPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0 maxHeight:(double)a1 filters:(id)a2 withBottomBar:(BOOL)a3;
- (void)initViewWithMaxHeight:(double)a0 andBottomBar:(BOOL)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)createFilterButton:(BOOL)a0;
- (void)onFilterButtonClicked:(id)a0;
- (void)onCollapseButtonClicked:(id)a0;
- (void)onClearButtonClicked:(id)a0;
- (void)selectItem:(long long)a0 inGroup:(long long)a1;
- (void)updateItemTitle:(id)a0 inItem:(long long)a1 andGroup:(long long)a2;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;

@end
