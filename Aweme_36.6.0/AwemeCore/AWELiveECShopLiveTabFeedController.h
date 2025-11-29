@class NSString, UIView, UIPanGestureRecognizer, IESLiveComponentContext;
@protocol AWEECLiveShopTipsViewProtocol, IESLiveSquareService;

@interface AWELiveECShopLiveTabFeedController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveInnerFeedDataControlAction, UIGestureRecognizerDelegate, AWELiveECShopLiveTabFeedControllerProtocol>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) UIView *snapShotBottomBar;
@property (nonatomic) BOOL waitShow;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<IESLiveSquareService> squareService;
@property (nonatomic) BOOL disableShowGuide;
@property (weak, nonatomic) UIView *bottomBar;
@property (weak, nonatomic) UIView<AWEECLiveShopTipsViewProtocol> *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)innerFeedWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)panExitLive;
- (BOOL)shouldBeginExitLiveGesture:(id)a0;
- (void)showSnapShotView:(BOOL)a0;
- (void)componentMountWithComponentContext:(id)a0;
- (void)addPanGesture;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;

@end
