@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VEImageDecodeQueue : IESMMObject

@property (retain, nonatomic) NSMutableArray *bufferCache;
@property (nonatomic) long long maxCacheCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;

+ (id)shareInstance;

- (void)p_registerMemoryWarningNotify;
- (long long)p_findBufferIndexByKey:(id)a0;
- (id)fetchImageBufferByKey:(id)a0;
- (void)returnBufferToCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)flushCaches;

@end
