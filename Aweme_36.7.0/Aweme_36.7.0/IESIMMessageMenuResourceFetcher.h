@class NSDictionary;

@interface IESIMMessageMenuResourceFetcher : NSObject

@property (readonly, nonatomic) NSDictionary *configs;
@property (nonatomic) BOOL enable;

+ (id)titleForKey:(id)a0 defaultTitle:(id)a1;
+ (id)iconUrlForKey:(id)a0 themeStyle:(long long)a1;
+ (void)preloadIconResourceIfNeed;
+ (id)configWithMenuKey:(id)a0;
+ (id)iconDiskCacheName;
+ (BOOL)enable;
+ (id)sharedInstance;

- (void)p_prefetchImageWithUrl:(id)a0;
- (id)p_configWithMenuKey:(id)a0;
- (void)p_preloadIconResourceIfNeed;
- (void)p_preloadIconResourceWithConfigs:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
