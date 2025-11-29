@interface AWEFeedNearbyMallCardResourceManager : NSObject

+ (id)loadCDNResourceData:(id)a0;
+ (id)loadCDNBackgroundImage:(id)a0;
+ (id)mallPanelPathFromBGTheme:(long long)a0;
+ (id)mallLocationIconPathFromBGTheme:(long long)a0;
+ (void)trackNearbyGeckoResourceMonitorWithResult:(long long)a0 loadType:(long long)a1 channel:(id)a2 filePath:(id)a3 errorMsg:(id)a4 cdnLoadTime:(long long)a5;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)lottiePath;
- (id)backgroundImagePath;
- (void)preloadMallCardResource;
- (id)lightLottiePath;
- (id)locationLottiePath;
- (id)bgLottiePath;
- (id)styleTwoBgImagePath;
- (id)poiContentBackgroundImagePath;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
