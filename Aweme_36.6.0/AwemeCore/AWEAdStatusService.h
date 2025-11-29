@class NSMapTable, NSTimer, NSMutableDictionary, NSString, AWEAwemeModel, NSDictionary;

@interface AWEAdStatusService : HTSService <AWECommerceLandingPageTransferMessage, AWELiveRoomMessage, AWEAdStatusService>

@property (retain, nonatomic) NSTimer *liveInnerDelayTrackTimer;
@property (retain, nonatomic) NSMapTable *visitAwemeMap;
@property (retain, nonatomic) NSMutableDictionary *pageTypeTimestampDict;
@property (nonatomic) double sessionCostSum;
@property (nonatomic) double lastCostSum;
@property (copy, nonatomic) NSString *lastReqID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL adOperationViewDidShownBySearchResult;
@property (nonatomic) BOOL adCardDidCloseByUserForSearchResultInflow;
@property (nonatomic) BOOL enterLiveNeedAutoOpenGoodDetail;
@property (nonatomic) BOOL isFromInflowToOutflow;
@property (nonatomic) BOOL isOutflow;
@property (retain, nonatomic) AWEAwemeModel *awemeModelToLiveRoom;
@property (retain, nonatomic) AWEAwemeModel *awemeModelToLiveRoomInFlow;
@property (copy, nonatomic) NSDictionary *adItemForFE;
@property (copy, nonatomic) NSString *bizTag;
@property (nonatomic) long long ifClearMode;
@property (nonatomic) double adSkyLightShowTime;
@property (retain, nonatomic) NSDictionary *commerceGlobalDict;
@property (retain, nonatomic) NSDictionary *downLoadUrlDict;
@property (nonatomic) double taskCompletedTime;
@property (copy, nonatomic) NSString *currentForamtInSearch;
@property (nonatomic) double ecommerceLiveAdShowTime;
@property (retain, nonatomic) id livePlayerPreloader;
@property (retain, nonatomic) NSDictionary *feedAdCommonParams;

- (void)tryReceivingAdCouponForAudienceWhenPangolin:(id)a0;
- (void)tryReceivingAdCouponForAudienceWhenMannorUnion:(id)a0;
- (void)trackWhenPangolin:(id)a0;
- (void)trackWhenMannorUnion:(id)a0;
- (void)trackWhenLiveSkyLight:(id)a0 event:(id)a1;
- (void)recordAwemeModelToLiveRoomCouponTokenWithOpenURL:(id)a0 param:(id)a1;
- (void)recordAwemeModelToLiveRoomCouponTokenWIthParams:(id)a0;
- (BOOL)shouldRecordNonAdAwemeModelToLiveRoomCouponTokenWithAwemeModel:(id)a0;
- (id)requestParamsInNonAdSceneWithAwemeModel:(id)a0;
- (void)liveInnerTrackWithParams:(id)a0 trackContext:(id)a1;
- (void)firstLiveTrackWithParams:(id)a0 trackContext:(id)a1;
- (id)requesetAvatarPendantBalanceIsSufficientWithCompletion:(id /* block */)a0;
- (id)fetchBalanceToCouponStateModel:(id)a0 withCompletion:(id /* block */)a1;
- (id)requestParamsValueEstimationWithLoadType:(long long)a0;
- (long long)hardAdDescriptionNumberOfLines:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectWithContainerSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(long long)a1 textRectDict:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectWithContainerSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(long long)a1 textVideoSize:(struct CGSize { double x0; double x1; })a2 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)processHotDataWithModels:(id)a0;
- (void)audienceQuitAllRoom;
- (void)startTransferToLandingPageVC;
- (void)finishTransferToLandingPageVC;
- (void)startTransferToLandingPageVCwithAWEAwemeModel:(id)a0 pageType:(id)a1;
- (void)finishTransferToLandingPageVCWithAwemeModel:(id)a0 pageType:(id)a1;
- (void)effectLiveWillDisappear;
- (void)trackEvent:(id)a0 params:(id)a1 trackContext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
