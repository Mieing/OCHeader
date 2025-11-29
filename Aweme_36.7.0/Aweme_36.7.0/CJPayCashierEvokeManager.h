@interface CJPayCashierEvokeManager : NSObject

+ (void)p_trackWithEventName:(id)a0 params:(id)a1;
+ (void)tryCleanContextWithNavi:(id)a0;
+ (id)cjpayCashierContextArray;
+ (long long)p_evokeTimeInterval;
+ (BOOL)p_canEvokeWithContextModel:(id)a0;
+ (BOOL)p_isInCashierContext:(id)a0 withNavi:(id)a1;
+ (void)p_dismissVC:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)saveContextWithModel:(id)a0;
+ (void)callBackWithEvokeId:(id)a0 apiResponse:(id)a1;

@end
