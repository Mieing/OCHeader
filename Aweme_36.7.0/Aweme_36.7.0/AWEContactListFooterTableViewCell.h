@class UILabel, UIView;

@interface AWEContactListFooterTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)suggestHeight;
+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
