@class NSURL, VEAudioConfig, NSString;

@interface IESAudioVolumConvertConfig : NSObject

@property (retain, nonatomic) NSURL *audioURL;
@property (nonatomic) long long type;
@property (nonatomic) double waveformduration;
@property (nonatomic) unsigned long long pointsCount;
@property (nonatomic) BOOL optAlgorithm;
@property (nonatomic) long long volumeDataType;
@property (nonatomic) double waveformstartTime;
@property (nonatomic) unsigned long long waveSliceCount;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (copy, nonatomic) NSString *cryptorKey;

- (void).cxx_destruct;
- (id)init;

@end
