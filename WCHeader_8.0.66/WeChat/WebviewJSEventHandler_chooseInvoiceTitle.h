@class NSString, JSEvent;

@interface WebviewJSEventHandler_chooseInvoiceTitle : WebviewJSEventHandlerBase <IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate, IWebviewAskAuthorizationLogicExt> {
    JSEvent *_jsEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)a0;
- (void)OnAskAuthorizationFailure:(id)a0 ForAuthInfo:(id)a1;
- (void)startInvoice;
- (void)chooseFailed;
- (void)OnGetInvoiceRet:(BOOL)a0 andResult:(id)a1 fromScene:(unsigned int)a2;
- (void)onChooseSuccess:(id)a0;
- (void)onChooseCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)a0;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceFail;
- (void).cxx_destruct;

@end
