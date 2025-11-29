@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface TAVFrameCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (struct __CVBuffer { } *)makePixelBufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct __CVPixelBufferPool { } *)pixelBufferPoolWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)savePixelBufferPool:(struct __CVPixelBufferPool { } *)a0 forKey:(id)a1;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)cacheKeyForSize:(struct CGSize { double x0; double x1; })a0;
- (void)cleanCache;
- (void).cxx_destruct;

@end
