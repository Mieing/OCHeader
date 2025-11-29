@class AWELongPressPanelBaseViewModel, UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEModernLongPressSettingCell : UITableViewCell

@property (retain, nonatomic) UIView *settingContentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *rightSubView;
@property (retain, nonatomic) UIView *totalView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *customIconView;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *longPressPanelVM;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;

- (void)resetSubviews;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorHidden:(BOOL)a0;
- (void)setUpUI;
- (void)updateUI:(id)a0;

@end
