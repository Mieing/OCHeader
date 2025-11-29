@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESSCFrameCache : NSObject <IESSCPixelBufferPool>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (struct __CVBuffer { } *)makePixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned int)a1;
- (struct __CVPixelBufferPool { } *)pixelBufferPoolWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned int)a1;
- (id)cacheKeyForSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned int)a1;
- (void)savePixelBufferPool:(struct __CVPixelBufferPool { } *)a0 forKey:(id)a1;
- (struct __CVBuffer { } *)makePixelBufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (void)flushPool;

@end
