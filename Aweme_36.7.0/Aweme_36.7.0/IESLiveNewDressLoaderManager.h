@class IESLiveNewFetchDressTaskThrottle, NSString;
@protocol IESLivePrivilegeDressAPI, IESLiveNewDressDataStoreProtocol;

@interface IESLiveNewDressLoaderManager : NSObject <IESLiveNewFetchDressTaskThrottleDelegate, IESLiveNewDressLoaderProtocol>

@property (retain, nonatomic) IESLiveNewFetchDressTaskThrottle *taskThrottle;
@property (retain, nonatomic) id<IESLivePrivilegeDressAPI> dressApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveNewDressDataStoreProtocol> dataStore;

- (void)updateDressListWithCompletion:(id /* block */)a0;
- (void)prefetchDressWith:(id)a0 completion:(id /* block */)a1;
- (void)scheduleUnionTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
