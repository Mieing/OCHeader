@class NSString, AWEVideoPublishViewModel;

@interface AWEFlowerRedPacketViewModel : NSObject <AWEFlowerRedPacketServiceProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ redPacketMsgHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveOutOrderId:(id)a0 redPacketId:(id)a1 couponId:(id)a2 redPacketNum:(id)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
