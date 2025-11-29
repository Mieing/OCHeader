@class UIButton;

@interface AWEMVChannelPlayerCardVolumeSwitchElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UIButton *volumeSwitch;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateVolumeSwitch;
- (void)updateAccessibilityWithIsMute:(BOOL)a0;
- (void)trackClickVolumeSwitch;
- (void)handleClickVolumeSwitch;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
