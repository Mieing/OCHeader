@class UIColor, UIImageView, UILabel, UIView;

@interface AWECitySelectLineTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *cityNameLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIImageView *locationIcon;
@property (nonatomic) long long nameLabelLeftOffset;
@property (retain, nonatomic) UIColor *cityNameColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) long long pageType;

- (void)configWithCity:(id)a0;
- (void)configWithCity:(id)a0 showL2Only:(BOOL)a1;
- (void)addLocationIconWithCity:(id)a0 showL2Only:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
