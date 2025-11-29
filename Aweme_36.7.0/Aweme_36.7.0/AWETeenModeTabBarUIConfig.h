@class AWETeenModeTabBarController, NSMutableDictionary;

@interface AWETeenModeTabBarUIConfig : NSObject

@property (retain, nonatomic) AWETeenModeTabBarController *tabBarController;
@property (retain, nonatomic) NSMutableDictionary *defaultLightModeFlags;
@property (retain, nonatomic) NSMutableDictionary *customLightModeFlags;
@property (retain, nonatomic) NSMutableDictionary *forceLightModeFlags;

+ (id)sharedConfig;

- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1;
- (void)didThemeChanged;
- (id)p_generateButtonTypeListWithButtonList:(id)a0;
- (void)updateTabBarAppearance;
- (void)resetTabBarStatus;
- (void)switchOutTeenMode;
- (void)switchInTeenMode;
- (void).cxx_destruct;
- (void)dealloc;

@end
