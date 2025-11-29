@class UIImageView, DUXButton, UILabel, UIView;

@interface AWEProfileTaskCardStyleListItemCell : UICollectionViewCell

@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) UIView *iconBGView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) DUXButton *button;
@property (retain, nonatomic) UIView *hotJumpArea;
@property (retain, nonatomic) UIView *titleAccessView;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ hotJumpAction;

+ (double)cellHeightWithModel:(id)a0 width:(double)a1;
+ (double)iconBGWidth;
+ (BOOL)enableCellHeightCalculateOptimize;
+ (double)mainFontSize;
+ (double)subFontSize;
+ (id)identifier;
+ (double)buttonFontSize;

- (void)configWithModel:(id)a0;
- (void)didClickButton;
- (BOOL)enableTapThrottle;
- (id)iconImage:(unsigned long long)a0;
- (void)configEmptyState;
- (void)updateIconImageViewLayout:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
