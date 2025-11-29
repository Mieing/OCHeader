@class UIPanGestureRecognizer, UIView;
@protocol AWEFeedPicoVRProgressViewDelegate;

@interface AWEFeedPicoVRProgressView : UIView

@property (retain, nonatomic) UIView *totalView;
@property (retain, nonatomic) UIView *currentProgressView;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UIPanGestureRecognizer *progressPanGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double lastValue;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long progressStatus;
@property (weak, nonatomic) id<AWEFeedPicoVRProgressViewDelegate> delegate;

- (double)widthWithProgress:(double)a0 totalValue:(double)a1;
- (void)progressPanGesture:(id)a0;
- (void)progressViewPanTouchBegan;
- (void)progressViewPanValueChanged;
- (void)progressViewPanTouchEnded;
- (void)updateProgressValue:(double)a0 totalValue:(double)a1 lastValue:(double)a2 animated:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;

@end
