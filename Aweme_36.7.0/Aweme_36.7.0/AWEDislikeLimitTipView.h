@class UILabel;

@interface AWEDislikeLimitTipView : UIView

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UILabel *separatorLabel;

- (void)configSubviews;
- (void)setTextForLeft:(id)a0;
- (void)setTextForRight:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
