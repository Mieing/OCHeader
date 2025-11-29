@class NSString;

@interface CJPayThemeModeManager : NSObject <CJPayThemeModeService>

@property (nonatomic) unsigned long long themeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (unsigned long long)themeModeFromString:(id)a0;
+ (id)sharedInstance;

- (void)i_setThemeModeWithParam:(id)a0;
- (id)i_themeModeStr;
- (BOOL)isOriginMode;
- (BOOL)isLightMode;
- (void)setTheme:(id)a0;
- (BOOL)isDarkMode;

@end
