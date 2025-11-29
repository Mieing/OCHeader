@class NSString, CADisplayLink, LMTViewController, UIView, UIPanGestureRecognizer, LMTContext;

@interface LMTHalfScreenExtension : NSObject <UIGestureRecognizerDelegate, LMTExtensionProtocol>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) long long currentMode;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isMaxHeight;
@property (copy, nonatomic) NSString *popupStatus;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double offsetY;
@property (nonatomic) struct CGPoint { double x; double y; } beginLocation;
@property (nonatomic) struct CGPoint { double x; double y; } beginVelocity;
@property (nonatomic) unsigned long long beginDirection;
@property (weak, nonatomic) LMTContext *context;
@property (weak, nonatomic) LMTViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)defaultShowAnimation;
- (void)setupCorner;
- (void)enablePopupGesture:(BOOL)a0;
- (void)enterFullScreenAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)enterHalfScreenAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)setupPanGesture;
- (void)startWatch;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })halfScreenFrame;
- (void)publishPopupStatus:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dismissFrame;
- (void)updateContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenFrame;
- (void)delCorner;
- (unsigned long long)directionWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isIgnoreGesture;
- (void)handleHorizontalPanGesture:(id)a0;
- (void)handleVerticalPanGesture:(id)a0;
- (void)defaultHideAnimation;
- (double)triggerLowLine;
- (double)triggerHighLine;
- (void)watchContainerViewPos;
- (void)endWatch;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
