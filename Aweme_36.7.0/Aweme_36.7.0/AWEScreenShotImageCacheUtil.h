@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEScreenShotImageCacheUtil : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)shouldDisableScreenShot;
+ (id)sharedInstance;

- (id)screenShotImageCachePath;
- (id)captureScreenShot;
- (void)cacheScreenShotImage:(id)a0 withName:(id)a1 completion:(id /* block */)a2;
- (void)imageDataWithName:(id)a0 completion:(id /* block */)a1;
- (void)cleanImageDataWithName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
