@class NSString;
@protocol AWEShowDataInjCacheService;

@interface AWELiveDataInjCacheServiceImpl : NSObject <IESLiveShowDataInjCacheService>

@property (weak, nonatomic) id<AWEShowDataInjCacheService> dataInjCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)getCacheInfoForGetDataInfo:(id)a0;
- (void)fetchDataForFetchDataInfo:(id)a0 completion:(id /* block */)a1;
- (void)cleanAllForScene:(id)a0;
- (void)cleanForScene:(id)a0 businessID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
