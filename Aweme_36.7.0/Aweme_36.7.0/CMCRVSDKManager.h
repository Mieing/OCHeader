@class NSString, BDARewardedVideoAdBaseController, NSMutableDictionary;
@protocol AWEBDARVLynxMoreRewardAdapter;

@interface CMCRVSDKManager : NSObject <BDARewardedVideoAdDelegate, BDARewardedVideoAlertDelegate, UINavigationControllerDelegate>

@property (copy, nonatomic) id /* block */ RVCompletion;
@property (copy, nonatomic) id /* block */ LoadCompletion;
@property (copy, nonatomic) id /* block */ OpenRVBridgeCompletion;
@property (nonatomic) long long errorType;
@property (nonatomic) BOOL hasCallBack;
@property (nonatomic) long long moreType;
@property (retain, nonatomic) BDARewardedVideoAdBaseController *RVController;
@property (retain, nonatomic) NSMutableDictionary *RVContent;
@property (retain, nonatomic) id<AWEBDARVLynxMoreRewardAdapter> lynxMoreReward;
@property (nonatomic) BOOL isCloseBlock;
@property (nonatomic) BOOL isBackToNormal;
@property (nonatomic) BOOL isUseWebview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)rewardVideoAdTaskWithParam:(id)a0;
+ (id)rewardVideoGeckoAccessKey;
+ (id)rewardVideoGeckoChannel;
+ (void)asyncAdTaskWithParam:(id)a0;
+ (void)asyncOpenLynxPageWithParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)openLynxPageWithParams:(id)a0;
+ (id)sharedInstance;

- (void)createRewardedVideoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)loadRewardVideoWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)openRewardVideoWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)setCommentIncomeId:(id)a0;
- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 playFailWithError:(id)a1;
- (void)videoAdDidLoadSuccess:(id)a0;
- (void)videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (void)videoAdBeforeStartRequestNextReward:(id)a0 isMore:(BOOL)a1 index:(long long)a2 info:(id)a3;
- (id)fetchRewardAgainContext:(id)a0;
- (BOOL)isAdCardChannel:(id)a0 accessKey:(id)a1;
- (id)fetchRewardFirstInfo:(id)a0 context:(id)a1;
- (void)openMiniAppByOpenSDK:(id)a0;
- (void)trackOneJumpOpenWechatWithInfo:(id)a0 label:(id)a1 errorType:(id)a2;
- (void)backToWebView:(id)a0;
- (void)openDrawRewardAd:(id)a0 completion:(id /* block */)a1;
- (void)openShoppingAdPage:(id)a0 completion:(id /* block */)a1;
- (void)openInspireVideoWithSourceModel:(id)a0 completion:(id /* block */)a1;
- (void)getRewardFinishWithInfo:(id)a0 viewController:(id)a1;
- (void)closeVideoAdAndCallBackRefreshTimeWithVideo:(id)a0 info:(id)a1;
- (void)cleanDataWithViewController:(id)a0;
- (void)openVideoAdFailFromRefreshTimeWithVideo:(id)a0 error:(id)a1;
- (void)callBackToRefreshTimeWithSuccess:(BOOL)a0 error:(id)a1;
- (void)createRewardedVideoWithParams:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;

@end
