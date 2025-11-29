@class AVAssetImageGenerator;

@interface WCFinderVideoAnalysisMgr : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *coverGenerator;

+ (unsigned long long)getImageColorfulIndex:(id)a0;
+ (id)genNewImageGeneratorByVideoPath:(id)a0;
+ (id)getWeightedByRaw:(id)a0 curFrequencyDic:(id)a1 len:(unsigned long long)a2;
+ (double)getHCRBetweenFrequencyFrom:(id)a0 frequencyDicJ:(id)a1;
+ (id)getImageHSVFrequencyDicByImage:(id)a0;
+ (id)getFrequencyDicBy:(id)a0;
+ (id)totalFormatValue:(id)a0;
+ (id)formatRawWCFinderHSVModel:(id)a0;
+ (id)hsvArray:(id)a0;
+ (id)convertRGBToHSL:(id)a0;

- (void)getVideoLensCount:(id)a0 resultBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
