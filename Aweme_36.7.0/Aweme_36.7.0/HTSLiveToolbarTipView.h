@class IESLiveRichTextLabel, UIImageView, UILabel, UIView, IESLiveFlexDisplayTextView;
@protocol IESPriorityGuideDelegate;

@interface HTSLiveToolbarTipView : UIView <HTSLiveToolbarTip, IESLiveBubbleGuide>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) IESLiveRichTextLabel *richTextLabel;
@property (retain, nonatomic) IESLiveFlexDisplayTextView *flexTextView;
@property (nonatomic) BOOL shouldHideWithTabSpace;
@property (nonatomic) BOOL showRightArrow;
@property (copy, nonatomic) id /* block */ tipHasTapped;
@property (copy, nonatomic) id /* block */ didHide;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) float priority;
@property (weak, nonatomic) id<IESPriorityGuideDelegate> delegate;

- (void)showExclusionDisabledTip:(id)a0 inView:(id)a1 atTopOf:(id)a2;
- (void)refreshTip:(id)a0;
- (void)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 didShow:(id /* block */)a3;
- (void)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2 didShow:(id /* block */)a3;
- (void)showTextPieces:(id)a0 inView:(id)a1 atTopOf:(id)a2 backgroundColor:(id)a3 contentEdgeInsets:(id)a4 didShow:(id /* block */)a5;
- (void)showTip:(id)a0 icon:(id)a1 inView:(id)a2 targetView:(id)a3 isPointToTop:(BOOL)a4 duration:(double)a5 didShow:(id /* block */)a6;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 duration:(double)a3 remakeConstraints:(id /* block */)a4 didShow:(id /* block */)a5;
- (void)showTip:(id)a0 inView:(id)a1 atTopOfViewGetter:(id /* block */)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showView:(id)a0 inView:(id)a1 atBottomOf:(id)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showExclusionDisabledTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2;
- (void)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atTopOf:(id)a4 didShow:(id /* block */)a5;
- (void)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atBottomOf:(id)a4 duration:(double)a5 didShow:(id /* block */)a6;
- (void)hasTouched:(id)a0;
- (void)showTip:(id)a0 inView:(id)a1;
- (void)makeBottomConstraintsWithArrowView:(id)a0 containerView:(id)a1 bottomItemView:(id)a2;
- (void)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2 remakeConstraints:(id /* block */)a3;
- (void)makeBottomConstraintsWithArrowView:(id)a0 containerView:(id)a1 bottomItemView:(id)a2 arrowSize:(struct CGSize { double x0; double x1; })a3;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 remakeConstraints:(id /* block */)a3;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 remakeConstraints:(id /* block */)a3 appendContentConstraints:(id /* block */)a4;
- (BOOL)showTextPieces:(id)a0 inView:(id)a1 atTopOf:(id)a2 backgroundColor:(id)a3 contentEdgeInsets:(id)a4;
- (void)makeTopConstraintsWithArrowView:(id)a0 containerView:(id)a1 bottomItemView:(id)a2 arrowSize:(struct CGSize { double x0; double x1; })a3;
- (void)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2;
- (void)showTip:(id)a0 withTipColorString:(id)a1 inView:(id)a2 atTopOf:(id)a3;
- (void)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atTopOf:(id)a4;
- (void)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atBottomOf:(id)a4;
- (void)showTip:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atTopOf:(id)a4;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 duration:(double)a3 remakeConstraints:(id /* block */)a4 appendContentConstraints:(id /* block */)a5 didShow:(id /* block */)a6;
- (void)showTip:(id)a0 inView:(id)a1 direction:(long long)a2 referenceView:(id)a3 arrowImage:(id)a4 backgroundColor:(id)a5 duration:(double)a6 didShow:(id /* block */)a7;
- (void)showTip:(id)a0 withTipColorString:(id)a1 inView:(id)a2 atTopOf:(id)a3 duration:(double)a4 didShow:(id /* block */)a5;
- (void)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2 duration:(double)a3 remakeConstraints:(id /* block */)a4 didShow:(id /* block */)a5;
- (void)showTextPieces:(id)a0 Tip:(id)a1 backgroundImage:(id)a2 arrowImage:(id)a3 inView:(id)a4 atTopOf:(id)a5 duration:(double)a6 didShow:(id /* block */)a7;
- (void)showView:(id)a0 inView:(id)a1 atTopOf:(id)a2 duration:(double)a3 backgroundColor:(id)a4 didShow:(id /* block */)a5;
- (BOOL)showTextPieces:(id)a0 inView:(id)a1 atTopOf:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
