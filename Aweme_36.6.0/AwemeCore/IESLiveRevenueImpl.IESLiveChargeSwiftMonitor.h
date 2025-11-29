@class _TtC18IESLiveRevenueImpl25IESLiveChargeSwiftMonitor;

@interface IESLiveRevenueImpl.IESLiveChargeSwiftMonitor : NSObject <IESLiveChargeMonitorService> {
    void /* unknown type, empty encoding */ business;
    void /* unknown type, empty encoding */ traceID;
    void /* unknown type, empty encoding */ clocks;
    void /* unknown type, empty encoding */ durationExtraParams;
}

@property (class, nonatomic, readonly) _TtC18IESLiveRevenueImpl25IESLiveChargeSwiftMonitor *shared;

- (void)traceChargeDiamondBuyApiWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)traceChargeDiamondListApiWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)configBusiness:(id)a0;
- (void)monitorBuySucceed:(BOOL)a0 orderInfo:(id)a1 error:(id)a2;
- (void)monitorSingleSKproductRequestStatus:(id)a0 duration:(id)a1;
- (void)trackStartIAP:(id)a0 requestPage:(id)a1;
- (void)commitDurationExtraParams:(id)a0 paramValue:(id)a1;
- (void)startPerfSampler;
- (void)stopPerfSampler;
- (void)traceChargeSKProductLoadWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)traceChargeIAPStartWithTrackInfo:(id)a0;
- (void)traceChargeIAPEndWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)traceChargeQueryOrderEndWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)traceChargeWalletInfoApiWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)traceChargeSuccessWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)ieslive_cjDidFinishProductOrder:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)commitChargeDurationTrackerMark:(id)a0;
- (void)traceChargePanelShowWithTrackInfo:(id)a0;
- (void)traceChargeCustomPackage;
- (void)traceChargePackageSelectWithTrackInfo:(id)a0;
- (void)traceChargeButtonClickWithTrackInfo:(id)a0;
- (void)traceChargePanelLeave;
- (void)trackPreloadSKProduct:(long long)a0 result:(id)a1;
- (void)monitorPrefetchIAPProductListWithStartTime:(double)a0 error:(id)a1 productCount:(long long)a2;
- (void)traceChargePrefetchSKProductWithTrackInfo:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)monitorWalletInfoWithError:(id)a0 duration:(id)a1 situation:(id)a2 diamondNum:(unsigned long long)a3;
- (void)monitorFetchProductListWithStartTime:(double)a0 error:(id)a1 fetchMoment:(long long)a2;
- (void)trackWalletInfoFetchingWithSituation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
