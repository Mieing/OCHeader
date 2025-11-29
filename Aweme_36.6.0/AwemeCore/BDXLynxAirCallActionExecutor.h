@interface BDXLynxAirCallActionExecutor : NSObject

+ (id)callActionByName:(id)a0 arguments:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (id)callSetData:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)_selectActionValueWithActionName:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)actionCallHigherOrderFunc:(id)a0 arguments:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
