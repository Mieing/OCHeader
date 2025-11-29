@class UIColor, UIImage, NSString;

@interface AWENormalModeTabBarNearbyTextViewUIConfig : AWENormalModeTabBarInnerViewUIConfig <AWENormalModeTabBarInnerViewUIConfigLightModeProtocol>

@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *gradientImageColor;
@property (retain, nonatomic) UIImage *gradientImage;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithText:(id)a0;

- (void)updateLightModeWithProgress:(double)a0;
- (void).cxx_destruct;
- (void)updateTextColor;

@end
