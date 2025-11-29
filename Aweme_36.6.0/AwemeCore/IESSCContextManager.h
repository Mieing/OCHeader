@class NSObject, CIContext, NSHashTable;
@protocol IESSCPixelBufferPool, OS_dispatch_semaphore;

@interface IESSCContextManager : NSObject

@property (retain, nonatomic) NSHashTable *observerList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
@property (retain, nonatomic) CIContext *CIContext;
@property (retain, nonatomic) id<IESSCPixelBufferPool> pixelBufferPool;

+ (id)sharedInstance;

- (void)renderCIImage:(id)a0 toMetalImage:(id)a1;
- (void)notifyChangeRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)unregisterObserver:(id)a0;

@end
