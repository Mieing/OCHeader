@class IESECLiveGoodsListDataStore, NSString, IESECObservationManager, IESECLiveGoodsListViewModelV2;

@interface IESECLiveGoodsListBaseServiceV2 : IESECBaseService <IESECLiveGoodsListDistributionProtocol>

@property (retain, nonatomic) IESECObservationManager *dataStoreObservationManager;
@property (weak, nonatomic) IESECLiveGoodsListViewModelV2 *viewModel;
@property (weak, nonatomic) IESECLiveGoodsListDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDataStoreObserve;
- (void).cxx_destruct;

@end
