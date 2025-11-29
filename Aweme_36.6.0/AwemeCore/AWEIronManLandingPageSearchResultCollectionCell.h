@class UIImageView, UILabel, UIView;

@interface AWEIronManLandingPageSearchResultCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL useV2;
@property (nonatomic) long long cellType;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateWithItemModel:(id)a0;
- (void)setUIStyle;
- (void).cxx_destruct;
- (void)setUpUI;
- (void)layoutUI;

@end
