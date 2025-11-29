@interface FlowCommon.FlowPageController : FlowCommon.FlowBaseViewController <TYPagerViewLayoutDelegate, TYTabPagerBarDataSource, TYTabPagerBarDelegate, NSObject, TYPagerControllerDelegate, TYPagerControllerDataSource> {
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ pagerController;
    void /* unknown type, empty encoding */ pagerBar;
    void /* unknown type, empty encoding */ pagerNav;
    void /* unknown type, empty encoding */ containerScrollDelegate;
    void /* unknown type, empty encoding */ isMainBot;
}

- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerViewLayoutDidScroll:(id)a0;
- (void)pagerViewLayoutWillBeginScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutDidEndScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutWillBeginDecelerating:(id)a0;
- (void)pagerViewLayoutDidEndDecelerating:(id)a0;
- (void)pagerViewLayoutWillBeginDragging:(id)a0;
- (void)pagerViewLayoutDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)pagerViewLayoutDidEndScrollingAnimation:(id)a0;
- (long long)numberOfItemsInPagerTabBar;
- (id)pagerTabBar:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 configureLayout:(id)a1;
- (double)pagerTabBar:(id)a0 widthForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)pagerController:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerController:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerController:(id)a0 viewDidAppear:(id)a1 forIndex:(long long)a2;
- (void)pagerController:(id)a0 viewDidDisappear:(id)a1 forIndex:(long long)a2;
- (void)pagerControllerWillBeginScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerControllerDidEndScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerController:(id)a0 viewWillAppear:(id)a1 forIndex:(long long)a2;
- (void)pagerController:(id)a0 viewWillDisappear:(id)a1 forIndex:(long long)a2;
- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)a0 controllerForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
