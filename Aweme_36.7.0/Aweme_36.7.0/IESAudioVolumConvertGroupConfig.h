@class NSURL, IESMMAudioEffectConfig;

@interface IESAudioVolumConvertGroupConfig : NSObject

@property (retain, nonatomic) NSURL *audioURL;
@property (nonatomic) long long type;
@property (nonatomic) double waveformduration;
@property (nonatomic) unsigned long long pointsCount;
@property (nonatomic) BOOL optAlgorithm;
@property (nonatomic) long long volumeDataType;
@property (nonatomic) double waveformstartTime;
@property (nonatomic) unsigned long long waveSliceCount;
@property (nonatomic) int filterType;
@property (retain, nonatomic) IESMMAudioEffectConfig *audioEffectConfig;

- (void).cxx_destruct;

@end
