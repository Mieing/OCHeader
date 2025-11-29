@class NSString, EcsCardHolderEntranceInfo;

@interface EcsOrderService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) EcsCardHolderEntranceInfo *entranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
