@class MJAudioFileManager, NSString, OMCAudioWaveformGenerator, MJVoiceInputDenoiser, NSObject, MJVocalAdjustmentCache;
@protocol OS_dispatch_queue, MJVoiceInputProcessorDelegate;

@interface MJVoiceInputProcessor : NSObject

@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;
@property (retain, nonatomic) NSString *processingIdentifier;
@property (nonatomic) unsigned int processedSliceOffset;
@property (nonatomic) unsigned int processedSliceIndex;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) long long sampleRate;
@property (nonatomic) unsigned int dataSliceLength;
@property (nonatomic) float gain;
@property (retain, nonatomic) NSString *pcmFilePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) unsigned int inputDataLength;
@property (readonly, nonatomic) OMCAudioWaveformGenerator *waveformGen;
@property (retain, nonatomic) MJVocalAdjustmentCache *vocalAdjustmentCache;
@property (nonatomic) unsigned long long denoiseType;
@property (readonly, nonatomic) MJVoiceInputDenoiser *denoiser;
@property (weak, nonatomic) id<MJVoiceInputProcessorDelegate> delegate;

+ (id)adjustVolumeForPCMData:(id)a0 withGain:(float)a1;
+ (id)float32DataWithSInt16Data:(id)a0;

- (id)initWithAudioFileManager:(id)a0 sampleRate:(long long)a1 dataSliceLength:(unsigned int)a2 gain:(float)a3 vocalAdjustmentCache:(id)a4;
- (void)dealloc;
- (void)resetWithDataSliceLength:(unsigned int)a0 gain:(float)a1;
- (void)reset;
- (void)startProcessingWithIdentifier:(id)a0;
- (void)appendProcessingData:(id)a0;
- (void)stopProcessing;
- (void)notifyWaveformUpdateWithPCMData:(id)a0;
- (void).cxx_destruct;

@end
