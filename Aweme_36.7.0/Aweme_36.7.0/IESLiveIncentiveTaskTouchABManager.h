@interface IESLiveIncentiveTaskTouchABManager : NSObject

+ (BOOL)liveEnableNewIncentiveFramework;
+ (BOOL)liveTaskToorbarRequestEnable;
+ (id)taskCenterPreloadConfig;
+ (id)taskTouchFeedbackOptConfig;
+ (id)taskPanelFlexibleFrequencyConfig;
+ (BOOL)enableShowTaskPendant;
+ (BOOL)enableTaskPendantShapeAlienation;
+ (BOOL)diaableShowNewTaskPendantGuide;
+ (id)taskCenterURLSuffix;
+ (id)taskCenterSchema;
+ (BOOL)enableTaskPanelEnqueue;
+ (BOOL)enableTaskCenterActivityLimit;
+ (BOOL)enableTaskCenterDailyLimit;
+ (long long)livePendantPositionType;

@end
