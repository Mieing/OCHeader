@class UIStackView, AFDButton, UIImageView, UILabel, UIButton;

@interface AWEFindFriendsContactsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIImageView *topIconImageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) AFDButton *mainButton;
@property (retain, nonatomic) UIButton *linkButton;
@property (copy, nonatomic) id /* block */ clickContactBlock;
@property (copy, nonatomic) id /* block */ clickLinkBlock;

- (void)p_tapContactsBtn;
- (void)p_tapLinksBtn;
- (void)configWithMainText:(id)a0 subTitleText:(id)a1 linkText:(id)a2 clickContactBlock:(id /* block */)a3 clickLinkBlock:(id /* block */)a4;
- (void)setLinkButtonHidden:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIconHidden:(BOOL)a0;

@end
