@interface BDXLynxAirCallJSBExecutor : NSObject

+ (id)actionCallJSB:(id)a0 actionValue:(id)a1 arguments:(id)a2 inContext:(id)a3 error:(id *)a4;
+ (id)callJSBSync:(id)a0 rawData:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (id)postprocessCallback:(id)a0 usingResult:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
