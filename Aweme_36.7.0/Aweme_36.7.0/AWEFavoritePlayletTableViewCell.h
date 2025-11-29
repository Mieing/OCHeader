@class UIImageView, AWEPaymentBadgeView, UILabel, UIView;

@interface AWEFavoritePlayletTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *updateMixLabel;
@property (retain, nonatomic) UIView *updateMixView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
