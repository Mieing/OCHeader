@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEPublishUserDeclarationTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *routerUrl;
@property (copy, nonatomic) NSString *iconUrl;

+ (double)heightForCell;
+ (id)identifier;

- (void)p_setupCommonUI;
- (void)showBottomLine:(BOOL)a0;
- (void)setIconImageWithIconUrl;
- (void)bindWithType:(unsigned long long)a0 isSelected:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;

@end
