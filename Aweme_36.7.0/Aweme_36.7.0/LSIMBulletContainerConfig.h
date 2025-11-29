@interface LSIMBulletContainerConfig : NSObject

+ (id)p_bulletContainerConfig;
+ (BOOL)p_reusePoolEnable;
+ (unsigned long long)bulletContainerReusePlan;
+ (id)p_reuseAllowedList;
+ (id)p_bulletContainerSchemaAppendStrategyModified;
+ (BOOL)enableGlobalReusePool;
+ (BOOL)reusePoolEnableWithBulletScene:(unsigned long long)a0;
+ (id)reuseAllowedList;
+ (unsigned long long)reusePoolMemoryCostLimit;
+ (long long)reusePoolCountLimit;
+ (long long)reusePoolSingleListCountLimit;
+ (double)reusePoolAgeLimit;
+ (long long)memoryClearTime;
+ (BOOL)memoryClearWhenEnterBackground;
+ (id)bulletContainerSchemaAppendStrategy;

@end
