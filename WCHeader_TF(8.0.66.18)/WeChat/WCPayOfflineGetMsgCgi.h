@protocol WCPayOfflineGetMsgCgiDelegate;

@interface WCPayOfflineGetMsgCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayOfflineGetMsgCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)startRequest:(double)a0 withAckKey:(id)a1 lastReqKey:(id)a2 lastPayMsgType:(int)a3 lastTransId:(id)a4;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didGetTenPayError:(id)a0;

@end
