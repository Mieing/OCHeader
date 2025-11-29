@class NSNumber, UIColor;

@interface ACCMusicUIThemeModel : NSObject

@property (copy, nonatomic) NSNumber *musicThemeStyle;
@property (readonly, nonatomic) UIColor *trimProgressWaveColor;

+ (BOOL)musicDarkThemeAbilityEnabled;
+ (id)backgroundColorWithThemeStyle:(long long)a0;
+ (id)darkThemeBackgroundColor;
+ (id)createCinemaThemeModel;

- (void)switchToDarkTheme:(BOOL)a0;
- (BOOL)isDarkThemeStyle;
- (void).cxx_destruct;
- (id)backgroundColor;

@end
