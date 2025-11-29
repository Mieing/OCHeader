@class UIImageView, AWEPaymentBadgeView, UILabel, UIView, AWEFeedInsetsLabel;

@interface AWEFavoriteMixTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *updateMixLabel;
@property (retain, nonatomic) UIView *updateMixView;
@property (retain, nonatomic) UIImageView *videoSourceImageView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) AWEFeedInsetsLabel *updateTagView;
@property (nonatomic) long long cellStyle;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (double)adaptiveFontSize:(double)a0;
- (BOOL)fixMixCellVoiceOverEnable;
- (void)updateTitleLabelLayoutWithMixViewShow:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
