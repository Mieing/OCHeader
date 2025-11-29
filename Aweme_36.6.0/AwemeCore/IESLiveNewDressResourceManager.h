@class NSString;
@protocol IESLiveNewDressDataService, IESLiveNewDressResourceLoader, IESLiveNewDressResourceCache;

@interface IESLiveNewDressResourceManager : NSObject <IESLiveNewDressResourceService>

@property (retain, nonatomic) id<IESLiveNewDressResourceLoader> loader;
@property (retain, nonatomic) id<IESLiveNewDressResourceCache> cache;
@property (retain, nonatomic) id<IESLiveNewDressDataService> dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prefetchDressResourceWithDressIDs:(id)a0 source:(long long)a1;
- (id)getDressResourceWithDressID:(id)a0 error:(id *)a1;
- (void)registerDressResourceModelCacheClass:(Class)a0;
- (void)registerDressResourceLoadProcessorClass:(Class)a0;
- (void)prefetchDressResourceWithDressID:(id)a0 source:(long long)a1;
- (void)loadDressResourceWithDressID:(id)a0 source:(long long)a1 error:(id *)a2;
- (id)initWithDressDataService:(id)a0;
- (void).cxx_destruct;

@end
