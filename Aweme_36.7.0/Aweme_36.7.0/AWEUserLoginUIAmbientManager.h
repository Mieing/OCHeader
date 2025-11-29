@class NSDictionary;

@interface AWEUserLoginUIAmbientManager : NSObject

@property (copy, nonatomic) NSDictionary *themeMap;

+ (id)sharedInstance;

- (id)ambientConfigWithThemeID:(id)a0;
- (void)p_loadThemeMapFromSettings;
- (void).cxx_destruct;

@end
