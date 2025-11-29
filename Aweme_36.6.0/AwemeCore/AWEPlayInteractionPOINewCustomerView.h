@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionPOINewCustomerView : UIView

@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configWithTitle:(id)a0 iconURLs:(id)a1;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
