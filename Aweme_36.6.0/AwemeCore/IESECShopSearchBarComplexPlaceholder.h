@class UIImageView, YYLabel;

@interface IESECShopSearchBarComplexPlaceholder : UIView

@property (retain, nonatomic) UIImageView *suffixIconView;
@property (retain, nonatomic) YYLabel *label;

- (void)configWithText:(id)a0;
- (void)configWithItem:(id)a0;
- (void)configWithText:(id)a0 icon:(id)a1;
- (void)configWithText:(id)a0 iconUrl:(id)a1;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
