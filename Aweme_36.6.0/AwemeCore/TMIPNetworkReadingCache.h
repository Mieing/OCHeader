@class TMNetworkDetectCache, NSString;

@interface TMIPNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *ipCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tm_ip_cache_preload;
+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithIP:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
