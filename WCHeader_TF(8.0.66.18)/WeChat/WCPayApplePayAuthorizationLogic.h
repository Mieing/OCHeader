@class NSString, NSDictionary, LiteAppDynamicModuleCallback, UIViewController;
@protocol WCPayApplePayAuthorizationLogicDelegate;

@interface WCPayApplePayAuthorizationLogic : NSObject <PKPaymentAuthorizationViewControllerDelegate>

@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;
@property (retain, nonatomic) UIViewController *paymentViewController;
@property (copy, nonatomic) id /* block */ paymentCompletionHandler;
@property (weak, nonatomic) id<WCPayApplePayAuthorizationLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRequestApplePay:(id)a0 currentVC:(id)a1 resultCallback:(id)a2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;
- (id)paymentTokenDictFromPKPayment:(id)a0;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)finishRequestApplePay:(id)a0 resultCallback:(id)a1;
- (id)getPaymentRequestFromMerchantInfo:(id)a0;
- (id)getPaymentRequestFromParameters:(id)a0;
- (id)paymentSummaryItemsFromArray:(id)a0;
- (id)paymentSummaryItemsFromPaymentSummaryItemArray:(id)a0;
- (unsigned long long)merchantCapabilityFromArray:(id)a0;
- (id)paymentNetworksFromArray:(id)a0;
- (void)startRequestApplePay:(id)a0 currentVC:(id)a1;
- (void)finishRequestApplePay:(id)a0 ret:(unsigned int)a1;
- (void)notifyOfflineOpenForApplePay:(id)a0;
- (void).cxx_destruct;

@end
