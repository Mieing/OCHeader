@interface AWEProfileContributionGuideCollectionViewFrequencyHelper : NSObject

+ (long long)getShowCountWithTransparentTransmissionData:(id)a0;
+ (void)cachePVDataWithTransparentTransmissionData:(id)a0;
+ (BOOL)checkAndUpdateShowFrequencyWithTransparentTransmissionData:(id)a0 isColdStartReload:(BOOL)a1;
+ (void)cleanExpiredCache;
+ (id)getGuideInfoFromTransparentTransmissionData:(id)a0;
+ (id)readCachedPVDataWithTransparentTransmissionData:(id)a0;

@end
