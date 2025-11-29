@interface AWEFeedNearbyShopCardResourceManager : NSObject

+ (id)loadCDNResourceData:(id)a0;
+ (void)trackNearbyGeckoResourceMonitorWithResult:(long long)a0 loadType:(long long)a1 channel:(id)a2 filePath:(id)a3 errorMsg:(id)a4 cdnLoadTime:(long long)a5;
+ (id)mainBGPath;
+ (id)locationIconPathFromBGTheme:(long long)a0;
+ (id)contentBGPathFromBGTheme:(long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)backgroundImagePath;
- (id)bgLottiePath;
- (BOOL)preloadShopCardResource;
- (id)locLottiePath;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
