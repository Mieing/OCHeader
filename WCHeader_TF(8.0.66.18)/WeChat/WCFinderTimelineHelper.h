@interface WCFinderTimelineHelper : NSObject

+ (BOOL)enableShowMachineTabFromSvrConfig:(id)a0;
+ (BOOL)enableShowRecommendTabFromSvrConfig:(id)a0;
+ (BOOL)enableShowFollowTabFromSvrConfig:(id)a0;
+ (BOOL)enableShowMachineTab;
+ (int)commentSceneFromTabType:(long long)a0;
+ (long long)getTargtTabTypeWith:(id)a0;
+ (long long)getLastTabType;
+ (BOOL)isInitNeedRedDotSwitchTabWithCtrlType:(unsigned long long)a0;
+ (long long)filterWeChatSwitchByTargetTabType:(long long)a0;
+ (void)retrieveLocationForFinder;
+ (id)getTabTypeBindRedDotPath:(long long)a0;

@end
