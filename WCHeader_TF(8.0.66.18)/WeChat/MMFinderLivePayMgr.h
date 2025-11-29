@class NSString, NSMutableDictionary, MMFinderLivePayRequestObject;

@interface MMFinderLivePayMgr : MMUserService <WCCoinBuyCoinLogicDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *requestId2PayRequests;
@property (retain, nonatomic) MMFinderLivePayRequestObject *currentBuyCoinPayRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceClearData;
- (void)startRequest:(id)a0 completion:(id /* block */)a1;
- (void)joinFanClubWith:(id)a0 rewardExtInfo:(id)a1 logicOberver:(id)a2 pageSheetProvider:(id)a3;
- (void)purchaseGameTeamupWith:(id)a0 rewardExtInfo:(id)a1 logicOberver:(id)a2;
- (id)deliveryGiftWith:(id)a0 rewardExtInfo:(id)a1 logicOberver:(id)a2;
- (void)purchaseChargeableLiveWith:(id)a0 wecoinAmount:(unsigned int)a1 logicOberver:(id)a2;
- (void)prepayLiveWithRewardType:(unsigned int)a0 rewardExtInfo:(id)a1 taskId:(id)a2 referenceId:(id)a3 logicOberver:(id)a4;
- (void)payForPaidBarrageWithTaskId:(id)a0 productId:(id)a1 rewardProductCount:(unsigned int)a2 rewardAmountInWecoin:(unsigned int)a3 clientMsgId:(id)a4 logicOberver:(id)a5;
- (void)buyCoinWithPayRequest:(id)a0 shortage:(unsigned int)a1;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (id)getLiveTask:(id)a0;
- (void).cxx_destruct;

@end
