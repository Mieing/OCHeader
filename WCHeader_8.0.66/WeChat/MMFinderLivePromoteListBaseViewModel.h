@class MMFinderLiveAnchorPromoteInfo, NSString, WCFinderRefreshTableFooterView, MMFinderLiveTaskId, NSData, NSMutableArray, MMTableView;
@protocol MMFinderLivePromoteListViewModelDelegate;

@interface MMFinderLivePromoteListBaseViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<MMFinderLivePromoteListViewModelDelegate> delegate;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ fetchCompleteBlock;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) long long titleCount;
@property (weak, nonatomic) MMTableView *mainTableView;
@property (weak, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMFinderLiveAnchorPromoteInfo *currentShowPromoteInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 anchorFinderUsername:(id)a1 type:(unsigned int)a2 delegate:(id)a3;
- (void)refreshDataWithType:(long long)a0 completeBlock:(id /* block */)a1;
- (void)refreshWithWithRefreshType:(long long)a0 completeBlock:(id /* block */)a1;
- (void)refreshWithWithTaskId:(id)a0 anchorFinderUsername:(id)a1 type:(unsigned int)a2 refreshType:(long long)a3 lastBuffer:(id)a4 completeBlock:(id /* block */)a5;
- (void)fetchData;
- (void)refreshData:(id)a0 type:(unsigned int)a1 refreshType:(long long)a2;
- (void)realRefreshTableView;
- (void)getBussinessModelFromData:(id)a0 type:(unsigned int)a1 refreshType:(long long)a2;
- (void)addModlWithDataArray:(id)a0 data:(id)a1 type:(unsigned int)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isContainItem:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)categoryItem:(id)a0 onCategoryChangeEvent:(unsigned long long)a1;
- (void)addButtonClicked;
- (void).cxx_destruct;

@end
