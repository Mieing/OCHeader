@class NSString, WCPlayerVideoMetadata;

@interface WCPlayerAudioEnhance : NSObject

@property (nonatomic) struct IWaveAudioHAidInterface { void /* function */ **x0; } *waveAudioHAidInst;
@property (nonatomic) int sampleNum;
@property (nonatomic) int sampleBuffSize;
@property (retain, nonatomic) NSString *tmpDataPath;
@property (retain, nonatomic) WCPlayerVideoMetadata *metadata;

- (id)initMetadata:(id)a0 mode:(int)a1 device:(int)a2;
- (void)dealloc;
- (void)setupWithMetaData:(id)a0;
- (void)initWaveAudioHAidInst:(int)a0 device:(int)a1;
- (int)getSampleBufSize;
- (id)waveAudioHAidProcessAudioFrame:(id)a0;
- (id)copyProcessFrameBufferFromInput:(id)a0;
- (void).cxx_destruct;

@end
