@class TMNetworkDetectCache, NSString;

@interface TMIDFVNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *idfvCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithIDFV:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
