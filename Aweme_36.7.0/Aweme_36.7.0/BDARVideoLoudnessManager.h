@class NSDictionary;

@interface BDARVideoLoudnessManager : NSObject

@property (nonatomic) double lufsFromPitaya;
@property (nonatomic) double sourceLoudness;
@property (nonatomic) double targetLoudness;
@property (copy, nonatomic) NSDictionary *videoAudioEffectConfig;

+ (id)sharedInstance;

- (BOOL)enableAudioEffect;
- (void)clearLoudness;
- (void)runAudioEffectTaskWithParams;
- (void).cxx_destruct;

@end
