@class IESLiveChargeLoadingView, NSDictionary, NSString;
@protocol IESWalletChargeViewModelDelegate;

@interface IESLiveWalletChargeViewModel : NSObject <IESLiveChargeFullLoadingViewDelegate>

@property (retain, nonatomic) IESLiveChargeLoadingView *loadingView;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long customIndex;
@property (nonatomic) BOOL shouldShowCustomCell;
@property (nonatomic) BOOL iapAllowCustomizedDiamond;
@property (nonatomic) BOOL hasChooseByManual;
@property (weak, nonatomic) id<IESWalletChargeViewModelDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) BOOL didManualAgreement;
@property (copy, nonatomic) id /* block */ manualAgreementChangedBlock;
@property (copy, nonatomic) id /* block */ refreshView;
@property (nonatomic) BOOL enableUseCouponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideCustomChargeView;
- (void)onChargeFullLoadingViewCloseBtnClick;
- (void)tapAgreement;
- (void)requestCustomChargesIfNeed;
- (void)addLoadingObserver;
- (BOOL)iapFullLoadingOptimizeEnable;
- (void)trackSelectDiamond:(id)a0;
- (void)p_purchaseModel:(id)a0;
- (void)trackChargeSuccessWithChargeModel:(id)a0;
- (void)chargeFailedWithError:(id)a0;
- (void)updateCommonTrackInfo:(id)a0;
- (void)didSelectChargeItemAtIndex:(long long)a0 chargeModels:(id)a1;
- (void)trackRechargePagePayClick;
- (void)trackRechargePagePayNowClick;
- (void)updateCustomStatus;
- (void)showCustomChargeView;
- (void).cxx_destruct;
- (id)init;

@end
