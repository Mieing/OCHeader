@interface SAMICore_AudioPostProcessorParameter : NSObject

@property (nonatomic) BOOL enablePostProcessor;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) BOOL enableTimeStretcher;
@property (nonatomic) float timeStretcherScale;
@property (nonatomic) float timeStretcherPitchShift;

@end
