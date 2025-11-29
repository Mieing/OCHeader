@interface MJVocalEnhancementProcessor : NSObject

+ (id)processWithFilePath:(id)a0 outputPath:(id)a1;
+ (id)processWithFilePath:(id)a0 outputPath:(id)a1 vocalEnhancementParams:(id)a2;
+ (id)calcVocalAdjustmentGainsWithCache:(id)a0 keys:(id)a1;
+ (id)calcVocalAdjustmentGainsInternalWithCachedParams:(id)a0;

@end
