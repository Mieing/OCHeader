@class NSCache;

@interface BDPCDDynamicCardManager : NSObject

@property (retain, nonatomic) NSCache *elementModelCache;

+ (id)sharedInstance;

- (void)clearAllCache;
- (id)cacheElementUIModelArrForUniqueId:(id)a0;
- (void)cacheElementUIModel:(id)a0 uniqueId:(id)a1;
- (void)cacheElementUIModelArr:(id)a0 uniqueId:(id)a1;
- (id)cacheElementUIModelForUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
