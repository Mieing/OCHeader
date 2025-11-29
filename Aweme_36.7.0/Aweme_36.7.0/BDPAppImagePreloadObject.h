@class NSLock;

@interface BDPAppImagePreloadObject : NSObject

@property (retain, nonatomic) NSLock *lock;

+ (id)imagePreloadConfig;
+ (BOOL)preloadBigImage;
+ (double)minRatioOfStart;
+ (double)minRatioOfPreload;

- (void)startPreloadWithModel:(id)a0 path:(id)a1 minRatio:(double)a2;
- (void)preloadImagesWithResources:(id)a0 path:(id)a1 uniqueID:(id)a2 minRatio:(double)a3;
- (void)asyncStartPreloadWithModel:(id)a0 path:(id)a1 minRatio:(double)a2;
- (void).cxx_destruct;
- (id)init;

@end
