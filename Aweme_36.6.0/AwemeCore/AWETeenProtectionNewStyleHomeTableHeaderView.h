@class NSString, UIImageView;

@interface AWETeenProtectionNewStyleHomeTableHeaderView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSString *headerImageName;
@property (retain, nonatomic) UIImageView *imageView;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
