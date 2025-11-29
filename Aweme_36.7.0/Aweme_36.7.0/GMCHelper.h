@interface GMCHelper : NSObject

+ (id)valuesByCurveModel:(id)a0;
+ (id)valuesByCurveModel:(id)a0 valueCount:(long long)a1;
+ (double)computeCurvedStep:(double)a0 lastValue:(double *)a1 lastVelocity:(double *)a2 type:(long long)a3 model:(id)a4;
+ (id)valueByCurveModel:(id)a0 progressPercent:(double)a1;

@end
