@class UIImageView, AWEIMOneCardMessageProps, UIView;

@interface AWEIMOneCardMessageView : UIView

@property (retain, nonatomic) UIView *bubbleView;
@property (weak, nonatomic) UIView *oneCardView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEIMOneCardMessageProps *props;

- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
