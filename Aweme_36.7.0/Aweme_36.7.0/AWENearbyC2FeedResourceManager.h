@interface AWENearbyC2FeedResourceManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)loadCDNResourceData:(id)a0;
- (void)trackNearbyGeckoResourceMonitorWithResult:(long long)a0 loadType:(long long)a1 channel:(id)a2 filePath:(id)a3 errorMsg:(id)a4 cdnLoadTime:(long long)a5;
- (id)liveIconPath;
- (BOOL)preloadLiveIconResource;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
