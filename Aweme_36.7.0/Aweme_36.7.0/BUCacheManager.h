@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BUCacheManager : NSObject {
    NSObject<OS_dispatch_queue> *_cacheOperationQueue;
}

@property (nonatomic) double fileOperationTimestamp;
@property (retain, nonatomic) NSMutableDictionary *cacheOperationUrls;

+ (unsigned long long)calculateCachedSizeWithError:(id *)a0;
+ (void)setFileNameRules:(id /* block */)a0;
+ (id)cachedFilePathForURL:(id)a0 isCreate:(BOOL)a1;
+ (id)cacheConfigurationForURL:(id)a0;
+ (id)shared;
+ (id)cacheDirectory;
+ (void)setCacheDirectory:(id)a0;

- (void)cacheResourceUseBegin:(id)a0;
- (void)clearOverSizeCache;
- (void)cacheResourceUseEnd:(id)a0;
- (void)clearSpecifiedResource:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
