@class IESECServiceProxy, NSString, NSMutableArray;
@protocol IESECShopDataService, IESECShopLayoutService, IESECShopStateService;

@interface IESECShopHybridService : IESECShopService <IESECShopHybridService> {
    NSMutableArray *_liveJSBridges;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveJSBridges;
- (void)registerInitialLiveJSBridges;
- (void).cxx_destruct;

@end
