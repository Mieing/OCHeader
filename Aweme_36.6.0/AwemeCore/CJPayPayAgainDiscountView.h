@class UILabel, UIImageView, UIView;

@interface CJPayPayAgainDiscountView : UIView

@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIImageView *discountImageView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isHiddenImageView;

- (void)setDiscountStr:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hiddenImageView:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
