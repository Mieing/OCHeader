@interface IESECLynxCardHeightCalculator : NSObject

+ (void)getCachedHeightWithModel:(id)a0;
+ (void)updateHeightWithModel:(id)a0;
+ (void)calculateWithModel:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
+ (id)lynxHeightCacheKey:(id)a0;
+ (void)trackHeightCalculateResult:(BOOL)a0 cost:(double)a1 type:(unsigned long long)a2 model:(id)a3 errMsg:(id)a4;
+ (void)registerBridges:(id)a0 toLynxView:(id)a1;
+ (void)calculateWithModels:(id)a0;
+ (void)calculateWithModel:(id)a0;
+ (void)attachLynxViewToModelIfNeed:(id)a0;
+ (void)initialize;

@end
