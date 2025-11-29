@class NSString, MMVoidCallback, MMVoidITransmitKvDataCallback, WCPayApplePayAuthorizationLogic;

@interface KindaApplePayService : NSObject <WCPayApplePayAuthorizationLogicDelegate, MMApplePayService>

@property (retain, nonatomic) WCPayApplePayAuthorizationLogic *applePayAuthorizationLogic;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *callback;
@property (retain, nonatomic) MMVoidCallback *finishApplePayCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRequestApplePayImpl:(id)a0 callback:(id)a1;
- (void)finishRequestApplePayImpl:(id)a0 retcode:(int)a1 callback:(id)a2;
- (void)onApplePayAuthorizationDidAuthPayment:(id)a0;
- (void)onApplePayAuthorizationDidCancel;
- (void)onApplePayAuthorizationDidFinish:(BOOL)a0 paymentViewController:(id)a1;
- (void)deleayFinishCallBack:(id)a0;
- (id)covertAuthenAppleInfoFromPKPayment:(id)a0;
- (void).cxx_destruct;

@end
