@class UIImageView, DUXButton, UILabel, UIView, AWEURLModel;

@interface AWEProfileTaskCardStyleCardItemCell : UICollectionViewCell

@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *iconBGView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIView *hotJumpArea;
@property (retain, nonatomic) DUXButton *button;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ hotJumpAction;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEURLModel *iconURLDark;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)didClickButton;
- (void)didThemeChanged;
- (id)iconImage:(unsigned long long)a0;
- (void)configEmptyState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
