@class UILabel, UIImageView;

@interface AWEIronManLandingPageCommonCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL setUI;
@property (retain, nonatomic) UIImageView *iconImage;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateToItemModel:(id)a0;
- (void)updateToDetailPageUI;
- (void)updateToV2UI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
