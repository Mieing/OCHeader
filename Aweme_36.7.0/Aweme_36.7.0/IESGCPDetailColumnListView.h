@class IESGCPRefreshFooter, NSArray, NSString, NSDictionary, UIView, UITableView;
@protocol IESGCPGameDetailColumnListActions;

@interface IESGCPDetailColumnListView : IESGCPDetailBaseView <UITableViewDelegate, UITableViewDataSource, IESGCPDetailBaseViewDelegate, IESGCPInteractScrollChildScrollable>

@property (retain, nonatomic) id<IESGCPGameDetailColumnListActions> columnListActions;
@property (retain, nonatomic) UIView *maskBgView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *children;
@property (retain, nonatomic) IESGCPRefreshFooter *refreshFooter;
@property (copy, nonatomic) id /* block */ onContentOffsetChanged;
@property (copy, nonatomic) NSString *locateNodeId;
@property (copy, nonatomic) NSDictionary *locateNodeMetaData;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL isTableViewUpdating;
@property (nonatomic) BOOL lynxLazyLoadOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)setScrollViewToTopAnimated:(BOOL)a0;
- (void)doOnContentOffsetChanged:(id /* block */)a0;
- (void)scrollToChildWithNodeID:(id)a0 metadata:(id)a1;
- (void)setNeedsUpdateViewConstraintsAnimated:(BOOL)a0 needImmediately:(BOOL)a1;
- (void)scrollSubViewToVisibleWithView:(id)a0 animated:(BOOL)a1;
- (void)triggerLoadMore;
- (id)columnListViewObjectWithContentNode:(id)a0;
- (void)preloadNextPageIfNeeded;
- (void)resetLoadMoreFooter;
- (void)loadMoreWithContentNodes:(id)a0;
- (void)scrollToChildWithNodeID:(id)a0 metadata:(id)a1 needRecursion:(BOOL)a2;
- (BOOL)enableLynxLazyLoadWithNodeID:(id)a0;
- (void)columnListViewObject:(id)a0 bindViewModel:(id)a1;
- (id)lynxLazyRenderList;
- (void)loadNextPageIfNeeded;
- (BOOL)enableOptimizeBindViewModel;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setup;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
