@class UIImageView, UILabel, UIView, UIButton;

@interface AWEPostWorkCustomNotLoginCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *maskColorView;
@property (retain, nonatomic) UILabel *loginLabel;
@property (retain, nonatomic) UIButton *loginButton;
@property (copy, nonatomic) id /* block */ goToLoginBlock;

- (void)configWithNotLoginModel:(id)a0 layoutStyle:(long long)a1;
- (void)setupFontSize;
- (void)maskColorViewTaped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
