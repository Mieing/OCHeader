@interface AWESceneConditionEvaluator : NSObject

+ (BOOL)evaluatorConditionsWithModel:(id)a0 params:(id)a1;
+ (id)transIDToString:(id)a0;
+ (BOOL)new_evaluatorConditionWithModel:(id)a0 params:(id)a1;
+ (BOOL)evaluatorWithAndConditionModel:(id)a0 params:(id)a1;
+ (id)new_evaluatorWithAndConditionModel:(id)a0 params:(id)a1 ignoreConditions:(id)a2;
+ (id)new_evaluatorConditionsWithModel:(id)a0 params:(id)a1;

@end
