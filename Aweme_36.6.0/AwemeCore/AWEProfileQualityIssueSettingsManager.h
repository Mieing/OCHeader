@interface AWEProfileQualityIssueSettingsManager : NSObject

+ (BOOL)enableGestureMonitor;
+ (id)gestureViewClazzWhiteList;
+ (id)gestureClazzWhiteList;
+ (BOOL)enableUserSyncMonitor;
+ (id)qualityIssueConfig;
+ (BOOL)enableProfileQualityIssueComponent;

@end
