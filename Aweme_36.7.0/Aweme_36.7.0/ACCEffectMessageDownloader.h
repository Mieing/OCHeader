@class NSOperationQueue, NSMutableDictionary;

@interface ACCEffectMessageDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *URLOperations;
@property (retain, nonatomic) NSOperationQueue *downloadOperationQueue;

+ (void)cleanCache;
+ (id)sharedDownloader;

- (void)downloadWithUrlList:(id)a0 needUpzip:(BOOL)a1 completion:(id /* block */)a2;
- (void)addDownloadOperationWithUrlList:(id)a0 needUpzip:(BOOL)a1 completion:(id /* block */)a2;
- (id)downloadCallbackCacheKeyWithUrlList:(id)a0;
- (id)rootDirectory;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
