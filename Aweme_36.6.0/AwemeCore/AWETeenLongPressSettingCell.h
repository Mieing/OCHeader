@class UIImageView, CAShapeLayer, UILabel, UIView, AWETeenLongPressPanelBaseViewModel;

@interface AWETeenLongPressSettingCell : UITableViewCell

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *leftSubView;
@property (retain, nonatomic) UIView *rightSubView;
@property (retain, nonatomic) AWETeenLongPressPanelBaseViewModel *panelViewModel;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;

- (void)setDefaultUIWithVM:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
