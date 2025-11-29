@class BDARewardedVideoAdBaseController, NSString, BDAROpenRewardParamsModel, NSMutableArray;
@protocol BDAROpenRewardSessionDelegate;

@interface BDAROpenRewardSession : NSObject <BDARewardedVideoAdDelegate>

@property (retain, nonatomic) BDAROpenRewardParamsModel *paramsModel;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long finishTimes;
@property (retain, nonatomic) NSMutableArray *grantRewardExtraArray;
@property (retain, nonatomic) BDARewardedVideoAdBaseController *rewardVideoController;
@property (retain, nonatomic) NSMutableArray *totalRewardArray;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (weak, nonatomic) id<BDAROpenRewardSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)cleanRewardVideoData;
- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 playFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (void)lynxViewDidFirstScreen:(id)a0;
- (void)broadcastWithEvent:(id)a0 params:(id)a1;
- (id)buildRequestParams:(id)a0;
- (void)openRewardedVideoWithParams:(id)a0 completion:(id /* block */)a1;
- (id)updateCloseButtonModelWithModel:(id)a0 index:(long long)a1;
- (id)updatePopupRewardModelWithModel:(id)a0 index:(long long)a1 amount:(id)a2 unit:(id)a3;
- (id)buildCallBackParams:(id)a0;
- (void)fetchGrantRewardAdInfo;
- (void)fetchRewardAgainInfoFromNetwork:(long long)a0 callBack:(id /* block */)a1;
- (id)fetchMoreRewardInfoFromRewardList:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
