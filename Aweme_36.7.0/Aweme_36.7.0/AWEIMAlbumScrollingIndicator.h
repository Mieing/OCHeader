@class UILongPressGestureRecognizer, NSString, UIView, UIPanGestureRecognizer, YYLabel;
@protocol AWEIMAlbumScrollingIndicatorDelegate;

@interface AWEIMAlbumScrollingIndicator : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) YYLabel *indicatorContent;
@property (retain, nonatomic) UIView *indicatorTouchView;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) UIPanGestureRecognizer *panIndicatorContent;
@property (retain, nonatomic) UIPanGestureRecognizer *panIndicator;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isTouchedIndicator;
@property (nonatomic) double flag;
@property (weak, nonatomic) id<AWEIMAlbumScrollingIndicatorDelegate> delegate;
@property (nonatomic) double positionY;
@property (nonatomic) double minPositionY;
@property (nonatomic) double scrollAreaHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)hideIndicator:(double)a0;
- (void)showIndicator:(double)a0;
- (void)configGesture;
- (void)updateScrollAreaHeight;
- (void)activeScrollerIndicator:(BOOL)a0 animatied:(BOOL)a1;
- (void)activeIndicator:(BOOL)a0;
- (void)bindScrollingView:(id)a0 toVC:(id)a1;
- (BOOL)isReachedBottom;
- (void)handlePan:(id)a0;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateContent:(id)a0;

@end
