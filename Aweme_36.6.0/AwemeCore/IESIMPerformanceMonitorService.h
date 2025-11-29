@class NSString;

@interface IESIMPerformanceMonitorService : HTSService <IESIMPerformanceMonitorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSessionExtraBlock:(id /* block */)a0 forTargetVC:(id)a1;
- (void)setSessionExtra:(id)a0 forKey:(id)a1 targetVC:(id)a2;
- (void)setSessionFPSMetricSubsceneName:(id)a0 forTargetVC:(id)a1;
- (void)updateFPSMonitorExtraInfo:(id)a0 forSceneWithName:(id)a1 context:(const void *)a2;
- (void)beginFPSSceneWithName:(id)a0 context:(const void *)a1;
- (void)endFPSSceneWithName:(id)a0 context:(const void *)a1;
- (void)updateFPSSubsceneName:(id)a0 forTargetViewController:(id)a1;
- (BOOL)isDiskCacheCleanExtremelyOptionCleaned;
- (BOOL)enableEmoticonAnimationOptimize;
- (BOOL)enableIMPowerOptimize;
- (long long)currentThermalState;
- (long long)cpuLevelType;
- (void)dumpTraceForMethodPairWithStartMethod:(id)a0 endMethod:(id)a1 info:(id)a2 sinceNowWithInterval:(double)a3;
- (void)dumpTraceWithTag:(id)a0 info:(id)a1 fromNowWithInterval:(double)a2;

@end
