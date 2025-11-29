@class YYLabel, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface AWEIMFansGroupDisturbMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) YYLabel *contentLable;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *disturbLabel;
@property (retain, nonatomic) UISwitch *disturbSwitch;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)__trackShowData;
- (void)__trackSettingClickData;
- (void)__handelCloseButtonCkicked:(id)a0;
- (void)__handelDisturbSwitchChanged:(id)a0;
- (void)__trackCloseData;
- (void)__trackMuteClickData;
- (void)performCellWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
