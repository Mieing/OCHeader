@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface AWEThumbnailCache : NSObject

@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableDictionary *requestPool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *generators;
@property (retain, nonatomic) NSMutableArray *generatorDurationArray;
@property (nonatomic) double tolerance;
@property (nonatomic) unsigned long long fetchFor;

- (id)keyForAsset:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 preferedSize:(struct CGSize { double x0; double x1; })a2;
- (long long)imageOrientationFromRotateType:(unsigned long long)a0;
- (id)cachedImageForKey:(id)a0 orientation:(long long)a1;
- (id)getThumbnailForAsset:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 preferedSize:(struct CGSize { double x0; double x1; })a2 rotation:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)trackAssetImageGenerator:(id)a0;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
