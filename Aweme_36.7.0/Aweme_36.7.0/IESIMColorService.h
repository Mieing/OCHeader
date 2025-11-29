@class NSString;

@interface IESIMColorService : HTSService <IESIMColorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentThemeStyle;
- (id)colorWithARGBString:(id)a0 defaultColor:(id)a1;
- (id)colorWithName:(id)a0;
- (id)colorWithType:(long long)a0;
- (id)colorWithType:(long long)a0 inTheme:(unsigned long long)a1;
- (id)colorWithName:(id)a0 inTheme:(unsigned long long)a1;
- (id)colorNameWithType:(long long)a0;
- (BOOL)isDynamicColor:(id)a0;
- (BOOL)isConstColor:(id)a0;
- (id)dynamicColorWithResolveBlock:(id /* block */)a0;
- (id)bizColorWithType:(long long)a0;
- (id)currentThemeName;
- (id)deprecatedColorWithType:(long long)a0 use:(long long)a1;
- (void)p_handleThemeDidChangeNoti:(id)a0;
- (id)p_colorWith:(long long)a0 theme:(id)a1;
- (id)p_aweThemeNameWith:(unsigned long long)a0;
- (id)p_colorWithName:(id)a0 theme:(id)a1;
- (id)bizColorNameWithType:(long long)a0;
- (id)bizColorWithName:(id)a0;
- (id)p_deprecatedColorWithName:(id)a0 use:(long long)a1;
- (id)init;

@end
