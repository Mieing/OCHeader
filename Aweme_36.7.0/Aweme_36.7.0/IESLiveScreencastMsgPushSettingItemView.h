@class UILabel, UISwitch;

@interface IESLiveScreencastMsgPushSettingItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long type;
@property (retain, nonatomic) UISwitch *pushSwitch;

+ (id)descWithType:(long long)a0;

- (void)makeConstraints;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupUI;

@end
