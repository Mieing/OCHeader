@class UITableView, UIButton, NSString, UILabel, NSMutableArray, AWEListDataController;

@interface AWEPublishMountPaymentVideoListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) UILabel *recordSelectView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSMutableArray *selectItemsArray;
@property (copy, nonatomic) id /* block */ confirmButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)addLoadMoreIfNeeded;
- (void)updateRecordSelectTitle;
- (void)addAwemeListsToDataControllerWithItemLists:(id)a0;
- (void)setAllExistingCellsCheckBoxWithEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectItems:(id)a1;
- (void)initFetchAwemeListsWithItemsModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)confirmButtonClicked;

@end
