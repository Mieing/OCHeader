@class NSString, NSMutableDictionary;

@interface IESGCPPreloadTaskMemoryCacheStore : NSObject <IESGCPPreloadTaskCacheStore>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCacheWithCacheId:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)addCache:(id)a0;

@end
