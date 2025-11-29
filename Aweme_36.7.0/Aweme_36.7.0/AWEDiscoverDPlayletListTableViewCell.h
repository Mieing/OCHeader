@class UIColor, UIImageView, AWEPaymentBadgeView, UILabel, UIView, AWEAwemeModel;

@interface AWEDiscoverDPlayletListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIView *lockMaskView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *locatedContentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;
@property (nonatomic) BOOL isBGColorWhite;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UILabel *fromRelateLabel;
@property (retain, nonatomic) UIImageView *fromRelateIcon;
@property (retain, nonatomic) UIImageView *materialLabelDecorateImage;
@property (retain, nonatomic) UILabel *calclulateMaterialLabel;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)updateUIWithModel:(id)a0;
- (void)setConstDarkMode;
- (id)minuteFormatStringWithDuration:(id)a0;
- (id)secondsFormatStringWithDuration:(id)a0;
- (id)getFormatTimeStringWithDuration:(id)a0;
- (BOOL)materialLabelDecorateImageNeedShow:(id)a0;
- (BOOL)fromRelateLabelNeedShow:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
