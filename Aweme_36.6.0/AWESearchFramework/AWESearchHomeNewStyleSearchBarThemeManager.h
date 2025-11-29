@interface AWESearchHomeNewStyleSearchBarThemeManager : NSObject

+ (id)sharedInstance;

- (void)registerColor;
- (id)deepthinkColorForceTheme:(unsigned long long)a0;
- (id)colorNamed:(id)a0 forceTheme:(unsigned long long)a1;
- (id)inputBarContainerGradientLayerStartColor:(unsigned long long)a0;
- (id)inputBarContainerGradientLayerColorsForceTheme:(unsigned long long)a0;
- (long long)inputViewKeyboardAppearanceForceTheme:(unsigned long long)a0;
- (id)sugColorForceTheme:(unsigned long long)a0;
- (id)inputBarColorForceTheme:(unsigned long long)a0;
- (id)barBackgroundColorForceTheme:(unsigned long long)a0;
- (id)barBorderColorForceTheme:(unsigned long long)a0;
- (id)elementBorderColorForceTheme:(unsigned long long)a0;
- (id)containerColorForceTheme:(unsigned long long)a0;
- (id)fetchRegisterBizColorName:(id)a0 darkARGB:(id)a1 lightARGB:(id)a2 forceTheme:(unsigned long long)a3;
- (id)inputBarContainerGradientLayerLightColors;
- (id)inputBarContainerGradientLayerBlackColors;
- (id)inputBarContainerGradientLayerLightStartColor;
- (id)inputBarContainerGradientLayerBlackStartColor;

@end
