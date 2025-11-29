@class NSString, WCPayRecallTransferCgi, MMWebViewController, CMessageWrap;
@protocol WCPayRevokeMsgControlLogicDelegate;

@interface WCPayRevokeMsgControlLogic : WCPayControlLogic <WCPayRecallTransferCgiDelegate, MMWebViewDelegate>

@property (weak, nonatomic) id<WCPayRevokeMsgControlLogicDelegate> logicDelegate;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WCPayRecallTransferCgi *recallTransferCgi;
@property (retain, nonatomic) MMWebViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processWCPayMsgRevokeRespIfNecessary:(id)a0 revokeTicket:(id)a1 msgWrap:(id)a2;

- (id)initWithDelegate:(id)a0 msgWrap:(id)a1;
- (void)startLogic;
- (void)requestTransferRecall;
- (void)onGetRecallTransferCgiResp:(id)a0;
- (void)handleOpenH5WithUrl:(id)a0;
- (void)webViewDidReturn:(id)a0;
- (void)revokeCurrentMsgLocally;
- (void).cxx_destruct;

@end
