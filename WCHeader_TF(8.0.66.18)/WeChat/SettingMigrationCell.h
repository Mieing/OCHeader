@class NSString, UIImageView, UIView, MMUILabel;

@interface SettingMigrationCell : UITableViewCell

@property (nonatomic) BOOL isOptEnable;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *myBackgroundView;
@property (retain, nonatomic) UIView *topSeperator;
@property (retain, nonatomic) UIView *bottomSeperator;
@property (retain, nonatomic) UIView *betweenSeperator;

+ (double)cellHeight:(BOOL)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
