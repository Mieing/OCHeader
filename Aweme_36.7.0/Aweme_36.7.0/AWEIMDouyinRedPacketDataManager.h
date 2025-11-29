@class NSMutableDictionary, NSMutableArray;

@interface AWEIMDouyinRedPacketDataManager : NSObject

@property (nonatomic) BOOL isRequestingRedPacketDetail;
@property (retain, nonatomic) NSMutableDictionary *checkPayStatusRetryTimesMap;
@property (nonatomic) long long redPacketMaxTime;
@property (nonatomic) BOOL hasMoreReceiveUser;
@property (retain, nonatomic) NSMutableArray *redPackReceiveUserList;
@property (retain, nonatomic) NSMutableArray *coverModelList;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (nonatomic) unsigned long long productType;

- (void)fetchRedPacketCoverList:(id /* block */)a0;
- (void)managerRedPacketCoverWithParams:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreRedpacketDetailWithOrderId:(id)a0 completion:(id /* block */)a1;
- (id)errorWithBusinessCode:(unsigned long long)a0 businessMsg:(id)a1;
- (void)postDealWithBusinssCode:(unsigned long long)a0 authUrl:(id)a1;
- (BOOL)shouldShowErrorToast:(unsigned long long)a0;
- (void)fetchRedPacketInfoWithOrderId:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)openRedPacketWithOrderId:(id)a0 extParams:(id)a1 completion:(id /* block */)a2;
- (void)checkRedPacketPayStatus:(id)a0 secUid:(id)a1 conversationShortId:(id)a2 type:(unsigned long long)a3 subType:(unsigned long long)a4 title:(id)a5 clientMsgId:(id)a6 completion:(id /* block */)a7;
- (void)refreshRedpacketDetailWithOrderId:(id)a0 completion:(id /* block */)a1;
- (void)fetchRedPacketInfoWithOrderId:(id)a0 completion:(id /* block */)a1;
- (void)openRedPacketWithOrderId:(id)a0 completion:(id /* block */)a1;
- (void)sendRedPacketWithToSecUid:(id)a0 conversationShortId:(id)a1 amount:(long long)a2 count:(long long)a3 type:(unsigned long long)a4 subType:(unsigned long long)a5 title:(id)a6 extParams:(id)a7 completion:(id /* block */)a8;
- (void)getPromotionsPreConsultWithSecUid:(id)a0 conversationShortId:(id)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateRedPacketInfo:(id)a0 ofMessage:(id)a1;
- (void)followUser:(id)a0 uidType:(id)a1 isFollow:(BOOL)a2 from:(long long)a3 fromPre:(long long)a4 completion:(id /* block */)a5;
- (void)fetchShareIMCardBuilderWithItemId:(id)a0 orderNo:(id)a1 imageIndex:(id)a2 completion:(id /* block */)a3;
- (void)fetchPromotionInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLynxCardPromotionInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)queryLotteryResultWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
