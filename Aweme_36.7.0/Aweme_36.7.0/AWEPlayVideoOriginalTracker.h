@interface AWEPlayVideoOriginalTracker : NSObject

+ (id)originalParamsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
+ (id)originalParamsForPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
+ (id)originalParamsForPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
+ (id)originalParamsForPlayPauseInPlayer:(id)a0 paramsModel:(id)a1;
+ (void)addPadAttributesToParams:(id)a0 paramsModel:(id)a1;
+ (void)addCircleTrackCommonParams:(id)a0 model:(id)a1;
+ (id)getSearchVideoMethodWithPlayer:(id)a0;
+ (void)followingEnterFeedParams:(id)a0 inPlayer:(id)a1;
+ (void)followUnreadFeedParams:(id)a0 inPlayer:(id)a1;
+ (void)trackFollowUnreadForEvent:(id)a0 inPlayer:(id)a1 paramsModel:(id)a2 trackType:(long long)a3;
+ (void)appendLogExtraKeys:(id)a0 withParams:(id)a1 player:(id)a2;
+ (void)trackFansTool:(id)a0 inPlayer:(id)a1;
+ (void)updateEnterMethodInLandscape:(id)a0;
+ (BOOL)isSearchFeedWithParams:(id)a0 previousPage:(id)a1;

@end
