@class NSString;

@interface IESIMThemeAdditionsService : HTSService <IESIMThemeAdditionsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)invalidateAttributedText:(id)a0 foregroundColorToConstColorTheme:(unsigned long long)a1;
- (long long)viewCurrentThemeStyle:(id)a0;
- (BOOL)viewHasPreferredTheme:(id)a0;
- (long long)viewPreferredThemeStyle:(id)a0;
- (void)preferDarkThemeForView:(id)a0;
- (void)cancelPreferredThemeForView:(id)a0;
- (void)setLayerBorderColor:(id)a0 forView:(id)a1;
- (id)blurEffectWithStyle:(unsigned long long)a0;
- (id)image:(id)a0 byTransformer:(id /* block */)a1;
- (void)preferLightThemeForView:(id)a0;
- (unsigned long long)p_aweColorThemeWithIESIMTheme:(unsigned long long)a0;
- (unsigned long long)p_aweUIBlurEffectStyleWithIESIMStyle:(unsigned long long)a0;

@end
