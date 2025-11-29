@class BDXBridgeEventSubscriber, NSString, AWEIMDouyinRedPacketDataManager;
@protocol AWEIMMessageProtocol;

@interface AWEIMDouyinRedPacketTransferManager : NSObject <AWEIMDouyinRedPacketTransferProtocol>

@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) id<AWEIMMessageProtocol> message;
@property (retain, nonatomic) BDXBridgeEventSubscriber *messageUpdateSubscriber;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) long long recvCondition;
@property (nonatomic) BOOL canRecv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)transferWithMessage:(id)a0 orderId:(id)a1 isNoticeClick:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_unsubscribeEvent;
- (void)p_processSharePromotionRpWithMessage:(id)a0 orderId:(id)a1 completion:(id /* block */)a2;
- (void)p_trackWithEvent:(id)a0 info:(id)a1 message:(id)a2;
- (void)transferToDetailWithOrderId:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)processTransferWithInfo:(id)a0 message:(id)a1 isFromNotice:(BOOL)a2 isOpenedRedpacket:(BOOL)a3;
- (void)p_handleToastWithInfo:(id)a0;
- (void)fetchRedPacketInfoWith:(id)a0 orderId:(id)a1 completion:(id /* block */)a2;
- (void)p_trackWithEvent:(id)a0 info:(id)a1 message:(id)a2 extra:(id)a3;
- (void)p_openRedPacketDetailViewControllerInfoResponse:(id)a0 message:(id)a1;
- (void)p_openRedPacketViewControllerInfoResponse:(id)a0 message:(id)a1;
- (void)p_setAndPresentOpenVCWithInfo:(id)a0 message:(id)a1 coverModel:(id)a2;
- (void)fetchDetailViewControllerWithOrderId:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)p_updatePromotionMessageComponent:(id)a0 status:(long long)a1 statusStr:(id)a2;
- (void)p_subscribe;
- (void)processExTransferWithParamsConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
