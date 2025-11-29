@class NSString, MJRefreshFooter, NSMutableArray, UITableView;
@protocol IESIMRichRefreshFooterProtocol;

@interface IESIMGroupAICloneAddAIDataComponent : AWEIMComponentBase <UITableViewDelegate, UITableViewDataSource, IESIMGroupAICloneAction>

@property (weak, nonatomic) MJRefreshFooter<IESIMRichRefreshFooterProtocol> *footer;
@property (weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) BOOL canClickCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_configTableView;
- (void)emptyViewButtonTapped;
- (void)p_loadMoreDataWithSuccessCompletion:(id /* block */)a0;
- (void)p_filterOutExistBots:(id)a0;
- (void)p_addAIClone:(id)a0;
- (void)p_trackCellClickWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
