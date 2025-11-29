@class NSDictionary, NSString;
@protocol AWESearchLifeServiceBaseViewControllerProtocol, AWESearchServiceManagerProtocol;

@interface AWESearchLifeServiceBaseService : AWESearchVerticalContainerService <AWESearchLifeServiceBaseServiceProtocol>

@property (nonatomic) BOOL hideCorrectionForFilterSearch;
@property (retain, nonatomic) NSDictionary *clientServerPassForOnce;
@property (weak, nonatomic) id<AWESearchLifeServiceBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)paramsContextDidReady:(id)a0;
- (void)chunkHandleReciverCardsPatchResponse:(id)a0;
- (void)prepareRequestDataWithKeyWord:(id)a0 extraLogParams:(id)a1 isFilterSearch:(BOOL)a2;
- (id)fetchResponseWithObject:(id)a0;
- (void)refreshContentAfterOtherScenesUpdatedWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
