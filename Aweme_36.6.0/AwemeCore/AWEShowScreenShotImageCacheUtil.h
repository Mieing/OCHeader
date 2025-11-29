@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEShowScreenShotImageCacheUtil : NSObject <AWEShowScreenShotCacheUtilProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)captureScreenShot;
- (void)cacheScreenShotImage:(id)a0 withName:(id)a1 completion:(id /* block */)a2;
- (void)imageDataWithName:(id)a0 completion:(id /* block */)a1;
- (void)cleanImageDataWithName:(id)a0 completion:(id /* block */)a1;
- (id)screenShotImageCachePathWithName:(id)a0;
- (void).cxx_destruct;

@end
