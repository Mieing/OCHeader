@interface IESECPerfSessionConfigHelper : NSObject

+ (id)objectForKeyPath:(id)a0 dict:(id)a1;
+ (id)processParamsForStage:(id)a0 filterCommonParam:(BOOL)a1;
+ (id)paramsExtractRule;
+ (id)processParam:(id)a0 strategy:(unsigned long long)a1;
+ (id)processDynamicParamsForStage:(id)a0;
+ (id)processCommonParamsForStage:(id)a0;
+ (BOOL)enablePerfSession;

@end
