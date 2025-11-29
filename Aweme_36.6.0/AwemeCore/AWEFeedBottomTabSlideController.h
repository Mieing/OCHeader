@class NSString;

@interface AWEFeedBottomTabSlideController : AWEAwemeFeedBaseController <UIGestureRecognizerDelegate, AWEMaskWindowGestureRecognizerExternalDelegate>

@property (nonatomic) BOOL needDispatchPanGesture;
@property (nonatomic) BOOL isBeyondProgress;
@property (nonatomic) BOOL isNeedBeginScroll;
@property (nonatomic) BOOL isCustomScrollingActive;
@property (nonatomic) struct CGPoint { double x; double y; } initialContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastReportedVelocity;
@property (nonatomic) double initialTranslationOffset;
@property (nonatomic) long long angle;
@property (nonatomic) double beginPointX;
@property (nonatomic) double beginPointY;
@property (nonatomic) struct CGPoint { double x; double y; } beginPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)windowGestureRecognizerShouldBegin:(id)a0;
- (BOOL)windowGestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)windowGestureTriggered:(id)a0;
- (void)addDelegateIfNeeded;
- (void)addDelegate;
- (void)removeDelegate;
- (void)transferGestureToScrollView:(id)a0;
- (BOOL)shouleBeginGesture:(id)a0;
- (BOOL)shouldResponseScroll;
- (BOOL)beyondProgressZone:(id)a0;
- (void)trackHomePageHotSlide:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
