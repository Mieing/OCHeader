@class NSString, NSTimer, BottomImageSnackBarContentView, UIView, UILabel;

@interface BottomImageSnackBarView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) unsigned long long dismissType;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) BottomImageSnackBarContentView *bottomContentView;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) BOOL queueEnable;
@property (nonatomic) BOOL shouldDismissWhenPointOutSide;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickActionButton;
- (void)showOnView:(id)a0;
- (void)showWithBottomOffset:(double)a0;
- (void)showOnView:(id)a0 bottomOffset:(double)a1;
- (void)didClickCloseButton;
- (void)startAutoHideIfNeeded;
- (void)setShowAnimation;
- (void)setHideAnimation;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0 onViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (double)setupTopContentUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setupContentUIWithRect:(struct CGSize { double x0; double x1; })a0 originFrame:(struct CGSize { double x0; double x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;

@end
