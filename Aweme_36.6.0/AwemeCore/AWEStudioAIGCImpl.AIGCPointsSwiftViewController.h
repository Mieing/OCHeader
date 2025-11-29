@interface AWEStudioAIGCImpl.AIGCPointsSwiftViewController : UIViewController <DUXTabBarContainerDelegate> {
    void /* unknown type, empty encoding */ totalPoints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pointsLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pointsTipView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_totalPointsListViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_consumedPointsListViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_obtainedPointsListViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_totalPointsListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_consumedPointsListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_obtainedPointsListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabBarContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabBar;
    void /* unknown type, empty encoding */ recordList;
    void /* unknown type, empty encoding */ hasFetch;
    void /* unknown type, empty encoding */ nextCursor;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ isFetching;
}

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (id)initWithTotalPoints:(long long)a0;
- (void)questionButtonDidTap;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
