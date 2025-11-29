@class UILabel, UIImageView, UIView;

@interface CAKAlbumCategorylistCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UIImageView *iconView;

- (void)configCellWithAlbumModel:(id)a0;
- (void)configBackgroundStyle:(long long)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;

@end
