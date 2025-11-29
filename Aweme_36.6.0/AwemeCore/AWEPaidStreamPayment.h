@class AWEPaidAuthItem, NSString, NSHashTable, AWEPaidAuthConfig;
@protocol AWEPaidPaymentDelegate;

@interface AWEPaidStreamPayment : NSObject <AWEPaidPayment>

@property (retain, nonatomic) NSHashTable *paymentEventHandlers;
@property (weak, nonatomic) id<AWEPaidPaymentDelegate> delegate;
@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;
@property (retain, nonatomic) AWEPaidAuthItem *authItemToPay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthConfig:(id)a0;
- (void)sendEventPaymentPageDidAppear;
- (void)sendEventWillExitPaymentPage;
- (void)sendEventDidExitPaymentPage;
- (void)registerPaymentEventHandler:(id)a0;
- (void)previewDidFinished;
- (void)paymentDidUpdateAuthItems;
- (void)goToPayForPaidAuthItem:(id)a0 paymentType:(long long)a1 extraParameters:(id)a2;
- (void)goToPayForPaidSchema:(id)a0 authItem:(id)a1 paymentType:(long long)a2 extraParameters:(id)a3;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredPaymentEventHandlers;
- (void)unregisterPaymentEventHandler:(id)a0;
- (void)sendEventLoadPaymentPageSuccess:(BOOL)a0 authItem:(id)a1;
- (void)sendEventDidAcquireAuthWithAuthItems:(id)a0;
- (void).cxx_destruct;
- (long long)paymentType;

@end
