@interface AWENearbySkyLightThemeManager : NSObject

@property (nonatomic) long long displayTransformerTheme;
@property (nonatomic) long long transformerTheme;

+ (id)sharedManager;

- (void)onAWEUIThemeChangeNotification;
- (void)updateSettingTransformerTheme:(long long)a0;
- (id)init;

@end
