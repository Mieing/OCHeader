@class NSString;
@protocol WCPayOfflineAckMsgCgiDelegate;

@interface WCPayOfflineAckMsgCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) NSString *ack_key;
@property (retain, nonatomic) NSString *req_key;
@property (nonatomic) int payMsgType;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) BOOL bIsProcessed;
@property (nonatomic) BOOL bIsPosEnabled;
@property (nonatomic) BOOL bIsMsgFromPull;
@property (weak, nonatomic) id<WCPayOfflineAckMsgCgiDelegate> cgiDelegate;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)callErrorDelegate;
- (void).cxx_destruct;

@end
