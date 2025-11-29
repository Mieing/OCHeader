@protocol MMMsgTipsExpandViewDelegate;

@interface MMMsgTipsExpandView : UIView

@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<MMMsgTipsExpandViewDelegate> expandViewDelegate;
@property (nonatomic) BOOL showBottomGradientMask;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideExpandView:(BOOL)a0;
- (void)onExpandViewDisappear;
- (id)customHeaderButton;
- (void)onCustomHeaderButtonClick;
- (void).cxx_destruct;

@end
