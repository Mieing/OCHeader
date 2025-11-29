@class EcsCardHolderEntranceInfo, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EcsOrderService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) EcsCardHolderEntranceInfo *entranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPageAppear;
- (void)preloadOrderAndCard:(int)a0;
- (void)onAccountInitialized;
- (id)getRedDotDigestFromBuffer:(id)a0;
- (BOOL)nativeDataManagerSwitchOn;
- (void)setSerialQueue:(id)a0;
- (id)serialQueue;
- (id)init;
- (id)getCardHolderEntranceConfig;
- (void)updateOrderEntranceInfo:(id)a0;
- (void)jumpOrderAndCardCenterFromVc:(id)a0 clickSessionId:(id)a1;
- (BOOL)useEcsNewLogic;
- (id)getFinderOrderAndCardEntranceInfo;
- (void)jumpOrderAndCardCenterWithFinderLogic:(id)a0;
- (void)preLoadData;
- (void).cxx_destruct;

@end
