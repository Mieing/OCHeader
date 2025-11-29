@class UILabel, NSMutableArray, AWEUILoadingView, NSString, UIView, AWEIMMultiTabShareListContext, UITableView;
@protocol AWEIMMultiTabShareSingleListViewControllerDelegate;

@interface AWEIMMultiTabShareSingleListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEIMMultiTabShareListContext *context;
@property (nonatomic) long long businessType;
@property (nonatomic) long long followingsOffset;
@property (nonatomic) long long totalFollowings;
@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *searchEmptyContentView;
@property (retain, nonatomic) UILabel *emptyLable;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) id<AWEIMMultiTabShareSingleListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadMoreData;
- (void)p_fetchData;
- (id)initWithListBusinessType:(long long)a0 context:(id)a1;
- (void)reloadDataWithSearchList:(id)a0;
- (void)p_fetchFriendsDataWithBlock:(id /* block */)a0;
- (void)p_fetchFollowingsDataWithBlock:(id /* block */)a0;
- (id)p_getShareCellNickNameWithUser:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)accessibilityScroll:(long long)a0;

@end
