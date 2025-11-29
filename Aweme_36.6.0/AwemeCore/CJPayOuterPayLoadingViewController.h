@class NSDictionary, CJPayCreateOrderResponse, NSString;
@protocol CJPayAPIDelegate;

@interface CJPayOuterPayLoadingViewController : CJPayOuterBaseViewController <CJPayAPIDelegate>

@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) double lastTimestamp;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (copy, nonatomic) NSDictionary *outerPayTrackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onResponse:(id)a0;
- (id)p_mergeCommonParamsWith:(id)a0 response:(id)a1;
- (void)didFinishParamsCheck:(BOOL)a0;
- (void)p_openCashDesk;
- (void)p_handleWithResponse:(id)a0 traceID:(id)a1 bizParams:(id)a2;
- (void)p_orderCreateSuccessWithResponse:(id)a0 traceID:(id)a1 bizParams:(id)a2;
- (void)p_configCashRegisterVCWithResponse:(id)a0 bizParams:(id)a1;
- (void).cxx_destruct;

@end
