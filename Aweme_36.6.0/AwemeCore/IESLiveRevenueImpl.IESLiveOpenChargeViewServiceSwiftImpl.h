@interface IESLiveRevenueImpl.IESLiveOpenChargeViewServiceSwiftImpl : NSObject <IESLiveOpenChargeViewService>

- (void)openCurrentLiveChargeViewIn:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2 dismiss:(id /* block */)a3;
- (void)openCurrentLiveChargeViewIn:(id)a0 trackInfo:(id)a1 isInTopView:(BOOL)a2 autoDismiss:(BOOL)a3 completion:(id /* block */)a4 dismiss:(id /* block */)a5;
- (void)openCustomChargeViewIn:(id)a0 trackInfo:(id)a1 chargeCompletion:(id /* block */)a2 manualAgreementChangedBlock:(id /* block */)a3 didManualAgreement:(BOOL)a4;
- (void)dismissChargeView;
- (void)dismissCustomChargeView;
- (id)init;

@end
