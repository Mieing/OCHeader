@interface IESIMLogoutCleanCacheFunction : NSObject

+ (void)startUp;
+ (id)sharedInstance;

- (void)clearAllCache;
- (void)userDidLogout:(id)a0;
- (void)userWillLogin:(id)a0;
- (id)init;
- (void)dealloc;

@end
