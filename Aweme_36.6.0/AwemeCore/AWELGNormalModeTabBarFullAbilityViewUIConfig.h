@class UIColor, UIImage, NSString;

@interface AWELGNormalModeTabBarFullAbilityViewUIConfig : AWENormalModeTabBarInnerViewUIConfig <AWENormalModeTabBarInnerViewUIConfigLightModeProtocol>

@property (nonatomic) double lightModeProgress;
@property (retain, nonatomic) UIColor *normalLightTextColor;
@property (retain, nonatomic) UIColor *selectedLightTextColor;
@property (retain, nonatomic) UIColor *normalDarkTextColor;
@property (retain, nonatomic) UIColor *selectedDarkTextColor;
@property (nonatomic) double imageHeight;
@property (nonatomic) double subviewsGapY;
@property (nonatomic) double subviewsTopMargin;
@property (retain, nonatomic) UIImage *customNormalImage;
@property (retain, nonatomic) UIImage *customSelectedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLightModeWithProgress:(double)a0;
- (void).cxx_destruct;

@end
