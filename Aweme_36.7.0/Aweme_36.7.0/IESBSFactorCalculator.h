@interface IESBSFactorCalculator : NSObject

+ (double)bandWidthFactorCalculatedByModelArray:(id)a0 safeCacheDuration:(double)a1 maxReservedDuration:(double)a2 maxBandwidthUsageFactor:(double)a3 minBandwidthUsageFactor:(double)a4 ladderPredictionSelectionType:(BOOL)a5 internetSpeed:(unsigned long long)a6 curVideoDuration:(double)a7;

@end
