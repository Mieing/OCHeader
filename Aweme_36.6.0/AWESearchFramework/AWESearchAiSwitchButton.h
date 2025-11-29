@class UIImageView;

@interface AWESearchAiSwitchButton : UIControl

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *bwIconView;
@property (retain, nonatomic) UIImageView *rotationIconView;
@property (nonatomic) long long status;

- (void)updateTheme:(unsigned long long)a0;
- (void)configLightImage;
- (void)configDarkImage;
- (id)urlStringAiSwitchEnable;
- (id)urlStringAiSwitchRotation;
- (void)rotationAnimation;
- (void)resetToBlackWhiteMode;
- (id)urlStringAiSwitchUnableLight;
- (id)urlStringAiSwitchUnableDark;
- (id)logoImageConfig;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
