@class NSString;
@protocol WCPayPassKitFacadeDelegate;

@interface WCPayPassKitFacade : NSObject <PKAddPaymentPassViewControllerDelegate>

@property (retain, nonatomic) NSString *m_panid;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) id<WCPayPassKitFacadeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddSecureElement:(id)a0;
+ (id)GenCurrentDeviceInfo;

- (id)getAllLocalSimplePasses:(BOOL)a0;
- (long long)getNFCCardTransitBalance:(id)a0;
- (id)getPKPass:(id)a0;
- (id)allPasses;
- (BOOL)isPassLibraryAvailable;
- (void)checkIssueCardPermissionWithSpecificCardType:(id)a0 appId:(id)a1 iOSVersion:(double)a2;
- (void)presentAddPaymentPassViewController:(unsigned int)a0 title:(id)a1 cardHolderName:(id)a2 primaryAccountSuffix:(id)a3 encryptScheme:(id)a4 showContent:(id)a5 panid:(id)a6 presentViewController:(id)a7;
- (void)addPaymentPassViewController:(id)a0 generateRequestWithCertificateChain:(id)a1 nonce:(id)a2 nonceSignature:(id)a3 completionHandler:(id /* block */)a4;
- (void)finishAddPaymentPassViewController:(id)a0 encryptedPassData:(id)a1 ephemeralPublicKey:(id)a2 activationData:(id)a3;
- (void)addPaymentPassViewController:(id)a0 didFinishAddingPaymentPass:(id)a1 error:(id)a2;
- (void)removeSecureElementPass:(id)a0;
- (void).cxx_destruct;

@end
