@interface AWEHPTabVisibleMonitorABSettingsUtil : NSObject

+ (id)strategyConfig;
+ (id)monitorConfig;
+ (BOOL)visibleMonitorEnable;
+ (BOOL)alogReportEnable;
+ (BOOL)uiTreeReportEnable;
+ (BOOL)limitVCHierarchyAutoRecoverWithTopVC:(id)a0 vcHierarchy:(id)a1;
+ (BOOL)enableAutoRecoverWithSceneID:(id)a0 timingType:(unsigned long long)a1;
+ (id)defaultSceneWhiteList;
+ (long long)getMonitorDelayTimeAfterColdLaunch;
+ (BOOL)monitorTabEnable:(id)a0 timingType:(unsigned long long)a1;
+ (BOOL)monitorTopWindowSubviewEnable:(id)a0;
+ (long long)getMaxReportCount;
+ (BOOL)tabbarAutoRecoverTimingEnableWithSceneID:(id)a0 timingType:(unsigned long long)a1 topVC:(id)a2 vcHierarchy:(id)a3;
+ (BOOL)topbarAutoRecoverTimingEnableWithSceneID:(id)a0 timingType:(unsigned long long)a1 topVC:(id)a2 vcHierarchy:(id)a3;
+ (BOOL)isInWhiteListWithSceneID:(id)a0 timingType:(unsigned long long)a1;

@end
