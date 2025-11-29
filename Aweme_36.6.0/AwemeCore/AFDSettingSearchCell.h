@class AFDRoundedView, UIImageView, UILabel, UIView;

@interface AFDSettingSearchCell : UITableViewCell

@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) long long colorStyle;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupCorners;
- (void)bindViewModel:(id)a0 cornerType:(unsigned long long)a1 withColorStyle:(long long)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
