@class NSString;

@interface AWEHPTabVisibleMonitorHPContainerController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (copy, nonatomic) NSString *currentTabID;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hpSlidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2;
- (void).cxx_destruct;

@end
