@class AWEIronManLandingPageCustomLabel, UIImageView, UILabel, UIView;

@interface AWEIronManLandingPageDeepRelationCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIImageView *descImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) AWEIronManLandingPageCustomLabel *buttonLabel;
@property (retain, nonatomic) UILabel *buttonMsg;

- (void)awe_themeDidChange:(long long)a0;
- (void)setThemeUI;
- (void)udpateToNewItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
