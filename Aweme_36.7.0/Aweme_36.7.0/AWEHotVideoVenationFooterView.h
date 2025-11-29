@class UIImageView, UILabel;

@interface AWEHotVideoVenationFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *timelineImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (id)reuseIdentifier;
+ (double)footerHeight;

- (void)configFooterStyle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
