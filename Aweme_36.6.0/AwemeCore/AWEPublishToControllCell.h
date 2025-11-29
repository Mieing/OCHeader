@class UIColor, UIImageView, UILabel, UIView;

@interface AWEPublishToControllCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectedIndicatorView;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL clickable;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *descriptionColor;

- (void)addSubviewsForContentView;
- (void)configWithTitle:(id)a0 description:(id)a1;
- (void)hideSeparateLine;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
