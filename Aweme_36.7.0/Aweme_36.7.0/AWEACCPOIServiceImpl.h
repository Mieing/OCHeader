@class NSString;
@protocol AWEPOISearchLocationDataManagerProtocol;

@interface AWEACCPOIServiceImpl : NSObject <ACCPOIServiceProtocol>

@property (retain, nonatomic) id<AWEPOISearchLocationDataManagerProtocol> searchPOIDataManger;
@property (retain, nonatomic) id<AWEPOISearchLocationDataManagerProtocol> recommendPOIDataManger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchPOIWithKeyword:(id)a0 searchType:(long long)a1 completion:(id /* block */)a2;
- (void)loadMorePOIWithKeyword:(id)a0 searchType:(long long)a1 completion:(id /* block */)a2;
- (void)p_searchPOIWithKeyword:(id)a0 searchType:(long long)a1 location:(id)a2 completion:(id /* block */)a3;
- (id)poiModelsFromResult:(id)a0;
- (id)createDataManager;
- (void).cxx_destruct;
- (BOOL)networkReachable;

@end
