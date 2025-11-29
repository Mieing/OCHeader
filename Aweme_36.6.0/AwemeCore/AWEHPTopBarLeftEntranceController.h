@class NSArray, NSString;
@protocol AWEHPTopBarEntranceItemProtocol;

@interface AWEHPTopBarLeftEntranceController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle, AWEHPTopBarLeftEntranceProtocol>

@property (copy, nonatomic) NSArray *leftEntranceItemClass;
@property (retain, nonatomic) id<AWEHPTopBarEntranceItemProtocol> leftEntranceItem;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hpTopBarContainerDidLoad;
- (BOOL)hpSlidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0 reason:(id *)a1;
- (BOOL)hpIsShowInteractiveAnimation;
- (BOOL)hpIsShowCaptionBubble;
- (void)hpTopBarContainerHideChange:(BOOL)a0;
- (void)hpTopBarContainerAlphaChange:(double)a0;
- (void)hpThemeDidChange:(long long)a0;
- (id)leftEntranceViewWithTabID:(id)a0;
- (id)currentLeftEntranceViewTabIds;
- (void)_setupLeftEntranceWithNoti:(id)a0;
- (void)setupLeftEntrance;
- (void)setupEntranceWithClass:(Class)a0;
- (void)reloadLeftEntranceAfterLogin;
- (void)loadEntranceItem:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
