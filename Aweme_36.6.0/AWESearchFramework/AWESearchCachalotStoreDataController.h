@class NSDictionary, NSMutableSet;

@interface AWESearchCachalotStoreDataController : AWESearchCachalotDataController

@property (retain, nonatomic) NSMutableSet *merchandiseShowOnce;
@property (copy, nonatomic) NSDictionary *addressDictionary;
@property (copy, nonatomic) NSDictionary *sortParams;

- (id)searchScene;
- (void)fetchEcommerceDynamicTabsWithCompletion:(id /* block */)a0;
- (long long)requestDataCount;
- (id)customRequestPath;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (BOOL)cachalot_refreshWithCompletion:(id /* block */)a0;
- (void)updateRequestParams;
- (void)trackUserInfoDisplayWithModel:(id)a0 at:(id)a1 keyword:(id)a2;
- (void)trackMerchandiseGoods:(id)a0 indexPath:(id)a1 keyword:(id)a2 entranceInfo:(id)a3;
- (void)updateAddressDictionary:(id)a0;
- (void).cxx_destruct;

@end
