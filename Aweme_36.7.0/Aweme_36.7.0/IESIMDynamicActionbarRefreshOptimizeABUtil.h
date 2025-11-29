@interface IESIMDynamicActionbarRefreshOptimizeABUtil : NSObject

+ (void)registerABExperiments;
+ (BOOL)isEnterConversationOptimizeEnable;
+ (BOOL)isDynamicActionbarRefreshOptimizeEnable;
+ (id)enterConversationOptimizeExpr;
+ (id)dynamicActionbarRefreshOptimizeExpr;

@end
