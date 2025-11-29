@interface IESLiveInteractionPrivacyMonitor : NSObject

+ (void)startMonitorTaskWithType:(long long)a0 biz:(id)a1 scene:(id)a2;
+ (void)startMonitorTaskWithType:(long long)a0 biz:(id)a1 scene:(id)a2 delay:(unsigned long long)a3 params:(id)a4 completionBlock:(id /* block */)a5;
+ (void)cancelMonitorTaskWithBiz:(id)a0 scene:(id)a1;

@end
