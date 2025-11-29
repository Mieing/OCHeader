@interface MMLiveEnergyWeEffectUtilities : NSObject

+ (long long)faceAlignmentSettingsLevelFromSettings:(const void *)a0;
+ (BOOL)adjustSettings:(void *)a0 toLevel:(long long)a1;
+ (BOOL)isFaceAlignmentEqualWithSettings1:(const void *)a0 settings2:(const void *)a1;
+ (long long)faceAlignmentItemLevelFromConfig:(int)a0;
+ (int)faceAlignmentConfigFromItemLevel:(long long)a0 defaultConfig:(int)a1;
+ (long long)occlusionSegmentItemLevelFromConfig:(int)a0;
+ (int)occlusionSegmentConfigFromItemLevel:(long long)a0 defaultConfig:(int)a1;

@end
