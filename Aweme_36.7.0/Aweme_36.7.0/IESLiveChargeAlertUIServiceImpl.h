@class IESLiveChargeRetentionAlert, NSString, IESLiveChargeFullLoadingView;

@interface IESLiveChargeAlertUIServiceImpl : NSObject <IESLiveChargeFullLoadingViewDelegate, IESLiveChargeAlertUIService>

@property (retain, nonatomic) IESLiveChargeRetentionAlert *retentAlert;
@property (retain, nonatomic) IESLiveChargeFullLoadingView *chargeLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onChargeFullLoadingViewCloseBtnClick;
- (void)addPurchaseLoading;
- (void)showChargeManualAgreementAlertWithConfirmBlock:(id /* block */)a0;
- (void)showChargeSafeRemindAlertWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showChargeSafeCheckBoxViewWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)containerView;

@end
