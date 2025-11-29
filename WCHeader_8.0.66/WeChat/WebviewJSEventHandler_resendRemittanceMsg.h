@class JSEvent, WCPayUnionTransferNotifyCgi, NSString;

@interface WebviewJSEventHandler_resendRemittanceMsg : WebviewJSEventHandlerBase <MMTipsViewControllerDelegate, WCPayUnionTransferNotifyCgiDelegate>

@property (retain, nonatomic) JSEvent *event;
@property (nonatomic) BOOL bIsOpenIM;
@property (retain, nonatomic) WCPayUnionTransferNotifyCgi *unionNotifyCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)handleError:(id)a0;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferNotifyCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
