@interface AWEExitAppMonitor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addNotification;
- (BOOL)mobFeedEnterBackground;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
