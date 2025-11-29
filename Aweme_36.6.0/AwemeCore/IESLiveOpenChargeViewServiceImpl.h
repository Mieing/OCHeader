@class NSString;

@interface IESLiveOpenChargeViewServiceImpl : NSObject <IESLiveOpenChargeViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openCurrentLiveChargeViewIn:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2 dismiss:(id /* block */)a3;
- (void)openCurrentLiveChargeViewIn:(id)a0 trackInfo:(id)a1 isInTopView:(BOOL)a2 autoDismiss:(BOOL)a3 completion:(id /* block */)a4 dismiss:(id /* block */)a5;
- (void)openCustomChargeViewIn:(id)a0 trackInfo:(id)a1 chargeCompletion:(id /* block */)a2 manualAgreementChangedBlock:(id /* block */)a3 didManualAgreement:(BOOL)a4;
- (void)dismissChargeView;
- (void)dismissCustomChargeView;
- (id)p_fetchViewModelWithTrackInfo:(id)a0 width:(double)a1 autoDismiss:(BOOL)a2 completion:(id /* block */)a3 dismiss:(id /* block */)a4;
- (id)p_fetchPopItemWith:(id)a0 containerView:(id)a1;
- (void)trackChargeViewShowWithTrackInfo:(id)a0;

@end
