@interface AWEIMRecommendGroupApplyVCTracker : NSObject

+ (void)trackRecommendGroupPopupWithEnvetType:(unsigned long long)a0 clickType:(id)a1;
+ (void)trackApplyJoinSchoolGroupWithCid:(id)a0 groupType:(id)a1;
+ (void)trackConfirmJoinRecommendGroupWithCid:(id)a0 currentCid:(id)a1 fromUid:(id)a2 memberCount:(int)a3 groupType:(id)a4;

@end
