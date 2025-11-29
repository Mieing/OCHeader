@class NSString, CJPayBDCreateOrderResponse, CJPayResultPageView, CJPayBDOrderResultResponse, UIImageView, CJPayPayBannerResponse, UIButton, CJPayBaseVerifyManager, NSDictionary, UILabel;

@interface CJPayBDResultPageViewController : CJPayHalfPageBaseViewController <CJPayResultPageViewDelegate>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) CJPayResultPageView *resultView;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (nonatomic) long long stateType;
@property (retain, nonatomic) UIButton *successBtn;
@property (retain, nonatomic) CJPayPayBannerResponse *tmpBannerResponse;
@property (nonatomic) BOOL isHasShowResult;
@property (nonatomic) double currentContainerHeight;
@property (retain, nonatomic) CJPayBDOrderResultResponse *resultResponse;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (copy, nonatomic) NSDictionary *jhExtInfo;
@property (nonatomic) BOOL isShowNewStyle;
@property (nonatomic) BOOL isForceCloseBuyAgain;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_setNavTitle;
- (void)p_showResult;
- (id)p_pageShowTrackParams;
- (void)p_trackWhenViewDidLoad;
- (void)p_updateSafeGuardState;
- (void)p_pageShowEvent:(id)a0;
- (void)p_queryBanner:(long long)a0;
- (id)p_titleAttributedStrWithFrontStr:(id)a0 latterStr:(id)a1;
- (void)p_setStateType;
- (void)p_closeActionAfterTime:(int)a0;
- (void)p_setNewStyleShowModelWithType:(long long)a0;
- (long long)p_resultPageType;
- (void)p_updateStateViewUIWithResultPageType:(long long)a0;
- (void)p_setSuccessState;
- (BOOL)p_isCombinePay;
- (BOOL)p_isShowSignDetail;
- (BOOL)p_isShowBanner;
- (void)p_superClose;
- (id)p_commonTrackParamWithBizParam:(id)a0;
- (void)p_updateContainerHeight:(double)a0;
- (void)p_tapTopButton:(id)a0;
- (void)stateButtonClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerHeight;
- (void)back;

@end
