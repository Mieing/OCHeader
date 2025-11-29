@class NSObject, UIImage, NSValue, BDImageCache, NSNumber;
@protocol OS_dispatch_queue;

@interface AWELongVideoImageMonitor : NSObject

@property (retain, nonatomic) BDImageCache *customCache;
@property (retain, nonatomic) UIImage *defaultLightThemePlaceholderImage;
@property (retain, nonatomic) UIImage *defaultDarkThemePlaceholderImage;
@property (retain, nonatomic) NSNumber *memorySizeLimit;
@property (retain, nonatomic) NSNumber *diskSizeLimit;
@property (retain, nonatomic) NSNumber *diskAgeLimit;
@property (retain, nonatomic) NSValue *imageSizeLimitValue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *longVideoLogQueue;

+ (id)sharedInstance;

- (void)setupCacheConfigIfNeeded;
- (id)getViewParentTree:(id)a0;
- (BOOL)detectIsPureColorImage:(id)a0;
- (void)didReceiveCleanCacheNotification:(id)a0;
- (void)trackLongVideoImageWithImageView:(id)a0 imageRequest:(id)a1 trackerParams:(id)a2;
- (id)defaultPlaceholderImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;
- (id)prefetchImagesWithURLs:(id)a0;
- (void).cxx_destruct;
- (id)cacheName;
- (id)init;
- (void)addNotificationObserver;

@end
