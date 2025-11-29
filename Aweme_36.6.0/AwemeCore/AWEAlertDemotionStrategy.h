@interface AWEAlertDemotionStrategy : NSObject

+ (id)demotionStrategyWithContext:(id)a0;
+ (id)p_demotionStrategyAlerts;
+ (long long)p_hitDemotionStrategyWithContext:(id)a0 strategyItem:(id)a1;
+ (BOOL)p_prepareTimeoutDisabled;
+ (id)demotionStrategyWithWithContext:(id)a0;
+ (void)prepareTimeoutHandleWithAlert:(id)a0 onCompletion:(id /* block */)a1;
+ (void)onCloseTimeoutHandleWithAlert:(id)a0 onClose:(id /* block */)a1;
+ (void)closeCallbackTimeoutWithForceAlert:(id)a0 closeCallback:(id /* block */)a1;

@end
