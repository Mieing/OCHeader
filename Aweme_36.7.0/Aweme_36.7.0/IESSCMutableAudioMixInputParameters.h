@class IESSCAudioProcessingTapHolder;

@interface IESSCMutableAudioMixInputParameters : AVMutableAudioMixInputParameters

@property (retain, nonatomic) IESSCAudioProcessingTapHolder *audioProcessingTapHolder;

+ (id)audioMixInputParametersWithTrack:(id)a0;

- (void)appendAudioProcessNode:(id)a0;
- (void)appendAudioProcessNodes:(id)a0;
- (void).cxx_destruct;

@end
