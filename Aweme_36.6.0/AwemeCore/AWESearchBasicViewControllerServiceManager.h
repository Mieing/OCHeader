@class NSString;

@interface AWESearchBasicViewControllerServiceManager : AWESearchBaseContainerServiceManager <AWESearchBasicServiceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)componentWillBeginRenderWithViewModel:(id)a0;
- (void)componentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)componentWillDisplay:(id)a0 withViewModel:(id)a1;
- (void)componentDidEndDisplay:(id)a0;
- (void)feedDidScroll:(id)a0;
- (void)feedWillBeginDragging:(id)a0;
- (void)feedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)feedDidEndDecelerating:(id)a0;
- (void)feedDidEndScrollingAnimation:(id)a0;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)handleRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customLoadmoreResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)viewDidAppear;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
