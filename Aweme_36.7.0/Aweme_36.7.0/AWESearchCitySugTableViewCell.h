@class UILabel, AWECityModel, UIView;

@interface AWESearchCitySugTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILabel *cityNameLabel;
@property (retain, nonatomic) AWECityModel *cityModel;

- (void)configUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
