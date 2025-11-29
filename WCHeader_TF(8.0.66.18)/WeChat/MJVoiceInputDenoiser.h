@class NSData, NSString;

@interface MJVoiceInputDenoiser : NSObject

@property (nonatomic) BOOL isValid;
@property (nonatomic) unsigned int sampleRate;
@property (readonly, nonatomic) NSData *lastRemainingData;
@property (retain, nonatomic) NSString *processingIdentifier;
@property (nonatomic) struct AudioChannels3aProcessorInterface { void /* function */ **x0; } *backingDenoiser;

- (id)initWithSampleRate:(unsigned int)a0;
- (void)dealloc;
- (BOOL)setupDenoiser;
- (id)denoiseWithData:(id)a0 identifier:(id)a1;
- (id)denoiseLastRemainingData;
- (void).cxx_destruct;

@end
