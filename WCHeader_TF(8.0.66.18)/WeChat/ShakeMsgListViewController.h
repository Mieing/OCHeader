@class MMTableView, NSString, NSMutableDictionary, UIView, NSMutableArray, WCTimeLineFooterView;

@interface ShakeMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, WCActionSheetDelegate, ShakeMgrExt> {
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UIView *_tableDefaultFooterView;
    NSMutableArray *_arrMessage;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
}

@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onOperate;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onClearList;
- (void)didReceiveLocalMemoryWarning:(id)a0;
- (void)addMessagesWithArray:(id)a0;
- (void)updateRightBar;
- (void)loadMoreData;
- (void)initData;
- (void)updateTableFooterView:(BOOL)a0;
- (void)initView;
- (void)scrollViewDidScroll:(id)a0;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)genNormalCellContentViewAtIndexPath:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)showEdit:(unsigned long long)a0 show:(BOOL)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (double)getNormalCellContentViewHeightAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onShakeMsgUnreadCountChanged;
- (void).cxx_destruct;

@end
