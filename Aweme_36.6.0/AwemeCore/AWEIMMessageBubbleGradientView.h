@class UIImageView, UIView;

@interface AWEIMMessageBubbleGradientView : UIView

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIImageView *userBubbleView;

- (void)setBubbleViewHidden:(BOOL)a0;
- (void)setGradientHide:(BOOL)a0 checkDiff:(BOOL)a1;
- (BOOL)isSameGradientImage:(id)a0;
- (void)updateContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 checkDiff:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageView:(id)a0;
- (void)setGradientImage:(id)a0;

@end
