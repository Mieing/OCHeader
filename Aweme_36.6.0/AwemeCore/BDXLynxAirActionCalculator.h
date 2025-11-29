@interface BDXLynxAirActionCalculator : NSObject

+ (id)evaluateExpression:(id)a0 arguments:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (id)_operatorMapper;
+ (id)preprocessParamsTemplate:(id)a0 arguments:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (void)_preprocessParamsTemplate:(id)a0 arguments:(id)a1 finalParams:(id)a2 keyPathPrefix:(id)a3 inContext:(id)a4 error:(id *)a5;
+ (id)concatKeypathUsingKey:(id)a0 andPrefix:(id)a1;

@end
