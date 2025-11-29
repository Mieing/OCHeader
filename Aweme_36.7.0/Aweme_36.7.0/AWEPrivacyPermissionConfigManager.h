@interface AWEPrivacyPermissionConfigManager : NSObject

+ (id)sharedInstance;

- (id)iconMap;
- (id)getConfigWithScene:(id)a0 permissionType:(long long)a1;
- (id)getConfigWithScene:(id)a0 permissionType:(long long)a1 extraOption:(id)a2;
- (id)p_getConfigWithScene:(id)a0 permissionKey:(id)a1;
- (id)defaultConfig;

@end
