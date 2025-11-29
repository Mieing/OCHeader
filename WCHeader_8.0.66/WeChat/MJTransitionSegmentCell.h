@class NSString, MJDashLine, UIView, MMUIButton;

@interface MJTransitionSegmentCell : MJSegmentCell <MJUIResponderProtocol>

@property (readonly, nonatomic) MJDashLine *dashLine;
@property (readonly, nonatomic) UIView *transitionButtonContainer;
@property (readonly, nonatomic) MMUIButton *transitionButton;
@property (readonly, nonatomic) UIView *specialHitTestReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)syncWithMutation;
- (void)updateButtonIconIsBlank:(BOOL)a0 isEnabled:(BOOL)a1 isHighlighted:(BOOL)a2;
- (void)showBorderViewAnimated:(BOOL)a0;
- (void)hideBorderViewAnimated:(BOOL)a0;
- (void)transitionButtonTouchUpInside:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
