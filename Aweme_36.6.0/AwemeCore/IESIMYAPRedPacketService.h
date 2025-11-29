@class NSString;

@interface IESIMYAPRedPacketService : HTSService <IESIMYAPRedPacketService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRedPacketEndWithMessage:(id)a0;
- (void)transferWithMessage:(id)a0 orderId:(id)a1 isNoticeClick:(BOOL)a2 completion:(id /* block */)a3;
- (void)showRedPacketPageWithConversation:(id)a0 redPacketSource:(long long)a1 actionID:(id)a2 productType:(unsigned long long)a3 completionBlock:(id /* block */)a4;

@end
