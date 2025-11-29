@class UIImageView, UIView, MMUIButton, MMUILabel;

@interface MMMenuBubbleTipsView : MMUIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) BOOL arrowDirectionUp;
@property (nonatomic) BOOL reverseBubble;
@property (weak, nonatomic) UIView *parentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)initShadow;
- (void)initBubbleBgView;
- (void)initTextlabel;
- (void)initArrowImageView;
- (void)initCloseButton;
- (void)onClose:(id)a0;
- (void)showInView:(id)a0 menuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2;
- (void)showInView:(id)a0 targetPosition:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)hideWithAniamted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (void)adjustSelfUIStateAndFrame;
- (double)maxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)textLabelFont;
- (id)textColor;
- (id)bubbleColor;
- (BOOL)shouldShowClose;
- (double)bubbleCornerRadius;
- (void).cxx_destruct;

@end
