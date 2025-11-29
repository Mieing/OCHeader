@class UILabel, UIImageView;

@interface AWEECOMIMChatSearchResultListCellFooter : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (id)identifier;
+ (double)footerHeight;

- (void)onClick;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
