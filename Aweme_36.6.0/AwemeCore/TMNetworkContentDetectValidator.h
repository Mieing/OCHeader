@interface TMNetworkContentDetectValidator : NSObject

+ (id)validateParams:(id)a0;
+ (void)updateUseRulerDetect:(BOOL)a0 andCacheRanges:(id)a1;
+ (id)validateParamsByRuler:(id)a0;
+ (id)validateParamsByLocal:(id)a0;
+ (void)addLocationType:(id)a0 cacheType:(id)a1 toSingleResults:(id)a2;

@end
