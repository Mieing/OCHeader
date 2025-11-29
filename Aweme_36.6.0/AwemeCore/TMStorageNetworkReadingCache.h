@class TMNetworkDetectCache, NSString;

@interface TMStorageNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *systemSizeBCache;
@property (retain, nonatomic) TMNetworkDetectCache *systemSizeKBCache;
@property (retain, nonatomic) TMNetworkDetectCache *systemSizeMBCache;
@property (retain, nonatomic) TMNetworkDetectCache *systemFreeSizeBCache;
@property (retain, nonatomic) TMNetworkDetectCache *systemFreeSizeKBCache;
@property (retain, nonatomic) TMNetworkDetectCache *systemFreeSizeMBCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithAttributes:(id)a0;
- (void)addSize:(id)a0 intoSizeBCache:(id)a1 andSizeKBCache:(id)a2 andSizeMBCache:(id)a3;
- (void)addSizeItem:(id)a0 intoSizeCache:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
