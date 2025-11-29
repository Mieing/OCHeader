@class UILabel;

@interface AWEECOMIMChatSearchResultListCellHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)headerHeight;
+ (id)identifier;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
