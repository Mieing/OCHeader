@interface AWEIMDetailComponent : AWEUserDetailBaseComponent

- (id)enterFrom;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (void)viewWillAppear;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear;

@end
