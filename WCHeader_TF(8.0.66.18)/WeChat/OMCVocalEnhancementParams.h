@class NSArray;

@interface OMCVocalEnhancementParams : NSObject

@property (nonatomic) BOOL isEqualizerEnabled;
@property (nonatomic) long long equalizerCurveType;
@property (retain, nonatomic) NSArray *equalizerPeakingFiltersParams;
@property (retain, nonatomic) NSArray *equalizerPoints;
@property (nonatomic) BOOL isAmplifierEnabled;
@property (nonatomic) long long amplifierType;
@property (nonatomic) double amplifierValue;
@property (nonatomic) BOOL amplifierCanClip;
@property (nonatomic) BOOL isCompressorEnabled;
@property (nonatomic) float compressorThresholdDB;
@property (nonatomic) float compressorNoiseFloorDB;
@property (nonatomic) float compressorRatio;
@property (nonatomic) float compressorAttackTime;
@property (nonatomic) float compressorReleaseTime;
@property (nonatomic) BOOL compressorNormalize;
@property (nonatomic) BOOL compressorUsePeak;
@property (nonatomic) BOOL isMatchLoudnessEnabled;
@property (nonatomic) long long matchLoudnessType;
@property (nonatomic) double matchLoudnessValue;
@property (nonatomic) BOOL isDenoiserSSEnabled;
@property (nonatomic) BOOL isLoudnessEQEnabled;
@property (nonatomic) float defaultLoudness;
@property (nonatomic) float minLoudness;
@property (nonatomic) float maxLoudness;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
