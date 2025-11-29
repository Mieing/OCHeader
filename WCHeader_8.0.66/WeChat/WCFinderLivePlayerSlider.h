@class NSNumber, SliderPanGestureRecognizerHandler, NSMutableArray, NSString, UIView, UIPanGestureRecognizer, MMUIButton;
@protocol WCFinderLivePlayerSliderDelegate;

@interface WCFinderLivePlayerSlider : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMUIButton *progressIconButton;
@property (retain, nonatomic) UIView *leftBarView;
@property (retain, nonatomic) UIView *rightBarView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) SliderPanGestureRecognizerHandler *panGesDelegateHandler;
@property (nonatomic) BOOL isStartRecognizePanGes;
@property (nonatomic) double startGesHandleRecordWidth;
@property (retain, nonatomic) NSNumber *valueNum;
@property (retain, nonatomic) NSNumber *lastValueNum;
@property (nonatomic) int lastTime;
@property (nonatomic) double lastX;
@property (retain, nonatomic) NSMutableArray *autoAttachDotList;
@property (weak, nonatomic) id<WCFinderLivePlayerSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGestures;
- (void)initNotifications;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutRightBarView;
- (void)layoutLeftBarView;
- (void)layoutProgressIconButton;
- (void)updateWidgetsOrigin;
- (void)updateUIWithValue:(double)a0;
- (void)updateUIWithDragState:(unsigned long long)a0;
- (void)onPanProgressIcon:(id)a0;
- (unsigned long long)getSliderDragStateFromPanGestureState:(long long)a0;
- (double)checkAndAdjustDotValueForAutoAttach:(double)a0;
- (void)configAutoAttachDotValues:(id)a0;
- (double)value;
- (void)setValue:(double)a0;
- (void)setValue:(double)a0 animateWithDuration:(double)a1 time:(double)a2;
- (BOOL)shoudAnimateToProgress:(double)a0 duration:(double)a1 time:(double)a2;
- (void)setValue:(double)a0 animateWithDuration:(double)a1 completion:(id /* block */)a2;
- (void)setValue:(double)a0 animateWithDuration:(double)a1 time:(double)a2 completion:(id /* block */)a3;
- (void)removeProgressAnimation;
- (BOOL)checkProgressValueValid:(double)a0;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)resetAnimation;
- (double)sliderBarCenterY;
- (void)updateValueNum:(id)a0;
- (void)pauseLayer:(id)a0;
- (void)resumeLayer:(id)a0;
- (void)resetLayer:(id)a0;
- (void)makeProgressIconBtnNotOverBoundary;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)handleUIOrientationChanged:(id)a0;
- (void).cxx_destruct;

@end
