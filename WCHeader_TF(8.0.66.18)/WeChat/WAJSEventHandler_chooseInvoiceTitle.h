@class NSString;

@interface WAJSEventHandler_chooseInvoiceTitle : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)startInvoice;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)a0;
- (void)OnAskAuthorizationFailure:(id)a0 ForAuthInfo:(id)a1;
- (void)OnGetInvoiceRet:(BOOL)a0 andResult:(id)a1 fromScene:(unsigned int)a2;
- (void)chooseFailed;
- (void)onChooseSuccess:(id)a0;
- (void)onChooseCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)a0;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceFail;

@end
