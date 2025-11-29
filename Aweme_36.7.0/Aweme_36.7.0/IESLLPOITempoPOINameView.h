@class UILabel, UIButton;

@interface IESLLPOITempoPOINameView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *extraTitleLabel;
@property (retain, nonatomic) UIButton *typeButton;
@property (nonatomic) double typeWidth;

+ (double)viewHeightWithInfo:(id)a0 maxWidth:(double)a1;

- (void)updateTypeInfo:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxWidth;
- (void)updateWithInfo:(id)a0;

@end
