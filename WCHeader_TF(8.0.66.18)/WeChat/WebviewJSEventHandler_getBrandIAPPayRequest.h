@class JSEvent, NSString;

@interface WebviewJSEventHandler_getBrandIAPPayRequest : WebviewJSEventHandlerBase <IBrandIAPMgrExt>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) NSString *productExtInfo;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)stopLoading:(BOOL)a0;
- (void)OnBrandIAPPrepay:(id)a0 GetProductID:(id)a1 ExtInfo:(id)a2;
- (void)OnBrandIAPPrepay:(id)a0 FailedWithError:(int)a1;
- (void)OnBrandIAPPayRequestForProduct:(id)a0;
- (void)OnBrandIAPPaySuccessForProduct:(id)a0;
- (void)OnBrandIAPPayCancelForProduct:(id)a0;
- (void)OnBrandIAPPayFailForProduct:(id)a0;
- (void)OnBrandIAPGetResult:(id)a0 Error:(int)a1;
- (void).cxx_destruct;

@end
