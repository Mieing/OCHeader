@class CAShapeLayer, UIImageView, UIView, UILabel, AWEIMPrivacySettingModel;

@interface AWEIMPrivacySettingBaseTableViewCell : UITableViewCell

@property (retain, nonatomic) CAShapeLayer *dividingLine;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEIMPrivacySettingModel *model;
@property (nonatomic) BOOL notBold;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL hideIconImageView;
@property (nonatomic) BOOL privacySettingOptimize;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
+ (BOOL)enableDividingLine;
+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (void)setupCorners;
- (id)containerViewBGColor;
- (id)realContentView;
- (void)addDividingLineX:(double)a0 width:(double)a1;
- (void)highlightWithAnimation;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
