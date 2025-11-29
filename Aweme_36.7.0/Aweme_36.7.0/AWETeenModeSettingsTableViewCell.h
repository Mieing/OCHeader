@class NSString, UIImageView, UILabel, AWETeenSettingItemModel;

@interface AWETeenModeSettingsTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) double titleWidth;
@property (nonatomic) double titleLabelOriginX;
@property (nonatomic) double detailLabelRightMargin;
@property (retain, nonatomic) AWETeenSettingItemModel *itemModel;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;

+ (double)titleLineSpacing;
+ (id)identifier;

- (void)updateSubviewsColor;
- (void)p_setupIcon;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSubviews;

@end
