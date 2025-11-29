@class NSString;

@interface IESLocalLifeThemeHostService : HTSService <IESLocalLifeThemeHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)themeColorNamed:(id)a0;

- (void)preferDarkThemeForView:(id)a0;
- (void)cancelPreferredThemeForView:(id)a0;
- (void)preferLightThemeForView:(id)a0;
- (unsigned long long)currentColorSuit;
- (id)preferDarkImage:(id)a0;
- (id)preferLightImage:(id)a0;

@end
