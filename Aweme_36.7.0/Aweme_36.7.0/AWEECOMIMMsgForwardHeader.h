@class UILabel, NSString;

@interface AWEECOMIMMsgForwardHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
