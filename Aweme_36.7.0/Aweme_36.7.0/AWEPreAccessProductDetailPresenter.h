@class NSString, AWEVideoProductDetailView, AWEAwemeModel, NSDictionary;

@interface AWEPreAccessProductDetailPresenter : AWEVideoPaymentBasePresenter

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWEVideoProductDetailView *detailView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double currPlayTime;
@property (nonatomic) long long currWatchStatus;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (id)trackCommonParams;
- (void)updateLogExtra:(id)a0;
- (void)didClickCloseButton;
- (void)checkVideoShouldUnlock:(id)a0;
- (void)configDetailView;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)checkVideoShouldUnlockIfNeed;
- (void)didClickBuyButton;
- (void)hasShownView;
- (id)trackCommonParamsWithButtonIndex:(long long)a0;
- (id)trackParamsForPreAccessAd;
- (void)didClickBuyButton:(id)a0;
- (void)updateButtonInfo;
- (void).cxx_destruct;

@end
