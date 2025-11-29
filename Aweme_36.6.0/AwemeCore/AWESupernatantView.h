@class NSTimer, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWESupernatantView : UIView

@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanPoint;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) long long movingStatus;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isAutoDismiss;
@property (nonatomic) BOOL isDismissAfterTapAction;
@property (nonatomic) double showTime;
@property (nonatomic) double bottomPadding;
@property (nonatomic) long long moveType;
@property (nonatomic) long long showAnimationType;
@property (nonatomic) long long dismissAnimationType;
@property (copy, nonatomic) id /* block */ tapViewBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;

- (void)tapGestureAction:(id)a0;
- (void)panGestureAction:(id)a0;
- (void)_initUI;
- (void)_initProperties;
- (void)setBottomPadding:(double)a0 needReviseAreaInset:(BOOL)a1;
- (void)__autoDismissIfNeed;
- (void)tapActionEnable:(BOOL)a0;
- (void)__updateUIWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)getPanGestureMoveDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)__dismissWithDirection:(unsigned long long)a0;
- (void)_returnToOriginStatus;
- (void)__dismissAnimationWithType:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)show;
- (void)timerAction;

@end
