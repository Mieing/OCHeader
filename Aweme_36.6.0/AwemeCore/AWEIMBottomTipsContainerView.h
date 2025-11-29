@class NSTimer, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEIMBottomTipsContainerView : UIView

@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) BOOL willConfirm;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isAutoDismiss;
@property (nonatomic) BOOL isDismissAfterTapAction;
@property (nonatomic) double showTime;
@property (nonatomic) double bottomPadding;
@property (nonatomic) BOOL needRevise;
@property (copy, nonatomic) id /* block */ tapViewBlock;
@property (retain, nonatomic) UIView *tapArea;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;

- (void)tapGestureAction:(id)a0;
- (void)panGestureAction:(id)a0;
- (void)_initUI;
- (void)_initProperties;
- (void)setBottomPadding:(double)a0 needReviseAreaInset:(BOOL)a1;
- (void)__resetTimer;
- (void)showLongPressShareAlertIfNeeded;
- (void)__autoDismissIfNeed;
- (void)tapActionEnable:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)show;
- (void)timerAction;

@end
