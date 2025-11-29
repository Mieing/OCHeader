@class UIImageView, UILabel, UIView;

@interface AWELunaUgCollectionListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *songTitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *customMaskView;

- (void)configSubviews;
- (void)updateMaskViewWithShouldShow:(BOOL)a0;
- (void)refreshWithTitle:(id)a0 description:(id)a1 coverImageUrl:(id)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
