@interface BDXLynxAirOperatorHelper : NSObject

+ (BOOL)isOperator:(id)a0;
+ (id)valueForKeyPath:(id)a0 inCollection:(id)a1 error:(id *)a2;
+ (BOOL)hasControlFlow:(id)a0;
+ (BOOL)isConditionTrue:(id)a0;
+ (id)unifyResult:(id)a0 error:(id *)a1;
+ (BOOL)isValidParams:(id)a0 count:(unsigned long long)a1 error:(id *)a2;

@end
