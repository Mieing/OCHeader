@interface FlowKitBizUI.FlowAlbumPageController : FlowCommon.FlowPageController {
    void /* unknown type, empty encoding */ viewControllerConfigs;
    void /* unknown type, empty encoding */ defaultPageIndex;
    void /* unknown type, empty encoding */ isLandingTab;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_naviView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ pageBarHeight;
}

- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)a0 controllerForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void)pagerController:(id)a0 viewWillAppear:(id)a1 forIndex:(long long)a2;
- (void)pagerTabBar:(id)a0 configureLayout:(id)a1;
- (double)pagerTabBar:(id)a0 widthForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)numberOfItemsInPagerTabBar;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
