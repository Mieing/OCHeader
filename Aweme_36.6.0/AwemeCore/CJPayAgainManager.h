@class CJPayBDCreateOrderResponse, NSMutableDictionary, CJPayNavigationController, NSDictionary, NSString;

@interface CJPayAgainManager : NSObject <CJPayAssetPayAgainDelegate>

@property (retain, nonatomic) NSMutableDictionary *commonTrackParams;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long enterAgainTimes;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (retain, nonatomic) NSDictionary *injectTrackInfo;
@property (copy, nonatomic) id /* block */ payAgainHandler;
@property (copy, nonatomic) id /* block */ pushBlock;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;
@property (copy, nonatomic) id /* block */ specialProcessBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0 params:(id)a1;
- (void)p_payAgainPreQueryPayTypeWithResponse:(id)a0;
- (void)p_gotoPayAgainPageV2WithResponse:(id)a0 payAgainViewModel:(id)a1;
- (id)p_buildPayAgainVCWithResponse:(id)a0 viewModel:(id)a1;
- (void)p_showPayAgainRecommendPopup:(id)a0 payAgainViewModel:(id)a1 payAgainVC:(id)a2;
- (void)p_pushPayAgainPage:(id)a0;
- (void)trackWithBtmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)p_clickPopUpTips:(id)a0;
- (id)p_againCommonTrackParams;
- (void)p_presentProtocolHalfViewWithLink:(id)a0;
- (void)payAgainWithResponse:(id)a0 curConfig:(id)a1 extParams:(id)a2 refreshBlock:(id /* block */)a3;
- (void)startPayAgainWithResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
