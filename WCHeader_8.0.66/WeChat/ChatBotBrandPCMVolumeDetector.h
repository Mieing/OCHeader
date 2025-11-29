@class NSTimer, NSMutableArray;

@interface ChatBotBrandPCMVolumeDetector : NSObject

@property (copy, nonatomic) id /* block */ decibelCallback;
@property (retain, nonatomic) NSMutableArray *energyCache;
@property (retain, nonatomic) NSTimer *calculationTimer;
@property (nonatomic) unsigned int sampleBits;
@property (nonatomic) unsigned int channelCount;
@property (nonatomic, getter=isDetectionRunning) BOOL detectionRunning;

- (id)initWithDecibelCallback:(id /* block */)a0;
- (void)startDecibelDetection;
- (void)stopDecibelDetection;
- (void)feedPcmData:(const char *)a0 dataLength:(unsigned int)a1;
- (void)calculateAverageDecibel;
- (void)releaseResources;
- (void)dealloc;
- (void).cxx_destruct;

@end
