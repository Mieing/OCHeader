@class UIButton, UILabel;
@protocol IESECWinFeedNavBarDelegate;

@interface IESECWinFeedNavBar : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *shopCartButton;
@property (retain, nonatomic) UILabel *addToCartHintLabel;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<IESECWinFeedNavBarDelegate> delegate;

- (void)backButtonDidTap:(id)a0;
- (void)cartButtonDidTap:(id)a0;
- (void)updateShoppingCartLabelCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
