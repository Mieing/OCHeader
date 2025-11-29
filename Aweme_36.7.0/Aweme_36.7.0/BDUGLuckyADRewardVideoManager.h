@class BDARewardedVideoAdBaseController, NSMutableDictionary, NSDictionary, NSString;

@interface BDUGLuckyADRewardVideoManager : NSObject <BDARewardedVideoAdDelegate, UINavigationControllerDelegate, BDUGLuckyADMoreRewardVideoProtocol>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableDictionary *trackCommonParams;
@property (retain, nonatomic) NSMutableDictionary *tokens;
@property (retain, nonatomic) BDARewardedVideoAdBaseController *adRewardedVideoController;
@property (copy, nonatomic) NSDictionary *moreRewardButtonModel;
@property (copy, nonatomic) NSDictionary *moreRewardRetentionModel;
@property (copy, nonatomic) NSDictionary *oneMorePopupModel;
@property (nonatomic) long long awardedCount;
@property (nonatomic) BOOL disableRetainADVC;
@property (nonatomic) BOOL hasClosed;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *extraForDoaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraServiceProtocols;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)createRewardedVideoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)luckyRewardedVideoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)luckyRewardedVideoAdDidLoadSuccess:(id)a0;
- (void)luckyRewardedVideoAdMoreRewardDisplayInfo:(id)a0 callBack:(id /* block */)a1;
- (void)luckyRewardedVideoAdMoreRewardDisplayInfo:(id)a0 extraParams:(id)a1 callBack:(id /* block */)a2;
- (void)luckyRewardedVideoAdBecomeEffective:(id)a0;
- (void)luckyRewardedVideoAdBecomeEffective:(id)a0 callback:(id /* block */)a1;
- (void)luckyRewardedVideoAdBecomeEffective:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)luckyRewardedVideoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAdDidLoadSuccess:(id)a0;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (id)fetchRewardAgainContext:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 context:(id)a1 index:(long long)a2 completion:(id /* block */)a3;
- (void)__commonVideoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)__commonVideoAdDidLoadSuccess:(id)a0;
- (void)__commonVideoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 extraParams:(id)a2 callBack:(id /* block */)a3;
- (void)__commonVideoAdBecomeEffective:(id)a0 extraParameters:(id)a1 rewardIndex:(id)a2 callback:(id /* block */)a3;
- (void)__commonVideoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)__handleRewardVideoCloseWithAdVideoModel:(id)a0;
- (void)__cleanData;
- (id)__doActionFeedbackToast:(id)a0;
- (void)rewardedVideoTrackWithParams:(id)a0;
- (void).cxx_destruct;

@end
