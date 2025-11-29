@class NSString, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface TingTPAudioMixTtsImpl : NSObject

@property (nonatomic) struct AudioListen3aProcessorInterface { void /* function */ **x0; } *coreImpl;
@property (nonatomic) int waveListenStatus;
@property (nonatomic) int sampleNum;
@property (nonatomic) int sampleBuffSize;
@property (nonatomic) BOOL isTtsEof;
@property (nonatomic) int ttsStreamType;
@property (nonatomic) int ttsSampleRate;
@property (nonatomic) int ttsBitDepth;
@property (nonatomic) int ttsChannelCount;
@property (nonatomic) unsigned long long ttsTotalBufferLength;
@property (retain, nonatomic) NSMutableArray *ttsBufferArray;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mutex;
@property (nonatomic) char *mixProcessPcmBuffer;
@property (retain, nonatomic) NSData *currentTtsBuffer;
@property (nonatomic) int remainTtsBufferLength;
@property (nonatomic) int ttsInputBufferOffset;
@property (retain, nonatomic) NSString *tmpDataPath;
@property (retain, nonatomic) NSString *ttsTmpDataPath;
@property (retain, nonatomic) NSString *tmpMixDataPath;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } timeBase;
@property (retain, nonatomic) NSMutableArray *processTimeDist;
@property (nonatomic) double totalProcessTime;
@property (nonatomic) int totalProcessCount;

- (id)init;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)a0;
- (int)getSampleBufSize;
- (int)getTtsBitDepth:(int)a0;
- (void)setAudioMixPcmBuffer:(id)a0 hasMore:(BOOL)a1 streamType:(int)a2 sampleRate:(int)a3 sampleFormat:(int)a4 channelCount:(int)a5;
- (id)dequeueData;
- (void)resetCurrentTtsBuffer;
- (void)fillTtsInputBuffer:(int)a0 ttsInputBuffer:(char *)a1;
- (id)onNotifyAudioProcessFrameOut:(id)a0;
- (void).cxx_destruct;

@end
