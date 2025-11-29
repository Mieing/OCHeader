@class UIImageView, NSString, UILabel;

@interface MJCaptionErrorTipLabel : UIView

@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) UILabel *label;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutWithMaxWidth:(double)a0;
- (void).cxx_destruct;

@end
