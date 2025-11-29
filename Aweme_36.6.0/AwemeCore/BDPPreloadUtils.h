@interface BDPPreloadUtils : NSObject

+ (id)getStrategyConfig:(id)a0;
+ (BOOL)userHighActiveInferSuccess:(id)a0;
+ (BOOL)checkNeedForbidLowPerformance:(id)a0;
+ (BOOL)checkNeedForbidLowPower:(id)a0;
+ (BOOL)checkNeedForbidLowPerformanceAndPower:(id)a0;
+ (long long)getPreloadStrategyLevel:(id)a0;
+ (BOOL)needPDFUseMemoryStrategy;
+ (BOOL)checkMemorySafe;
+ (id)getOldPreloadABKeyWithSchema:(id)a0;
+ (id)getNewPreloadABKeyWithSchema:(id)a0;
+ (BOOL)checkNeedForbidLowPreformancePreload;
+ (BOOL)needProtectHighActiveUserWithStrategy:(id)a0;
+ (BOOL)isUserHighActive;
+ (id)matchStrategyWithScene:(id)a0;

@end
