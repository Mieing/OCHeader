@class UILabel, NSString, UIColor;

@interface AWECitySelectHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *sectionTitleLabel;
@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) UIColor *textColor;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
