@class UILabel, UISwitch;

@interface IESSoloKTVTuningSwitchView : UIView

@property (copy, nonatomic) id /* block */ didClickBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *uiSwitch;

- (void)initView;
- (void)switchEnable:(BOOL)a0;
- (void)uiSwitchClick:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
