@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESSCPixelBufferCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *pixelBufferCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;

- (void)cachePixelBuffer:(struct __CVBuffer { } *)a0 withKey:(id)a1;
- (struct __CVBuffer { } *)cachedPixelBufferWithKey:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;

@end
