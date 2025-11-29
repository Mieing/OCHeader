@interface SECRulerRunner : NSObject

+ (id)validateParams:(id)a0;
+ (id)validateParams:(id)a0 source:(id)a1;
+ (BOOL)execute:(id)a0 withParams:(id)a1 defaultVal:(BOOL)a2 error:(id *)a3;
+ (id)executeAny:(id)a0 withParams:(id)a1 error:(id *)a2;
+ (void)setupFuncs;
+ (void)setupOperators;
+ (id)addCommonParams:(id)a0;
+ (id)consistentCommonParams;
+ (void)initialize;

@end
