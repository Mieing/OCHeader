@class SimpleAudioPlayer, NSString;
@protocol AudioDataRead;

@interface AMRAudioPlayerV2 : CommonPlayer <SimpleAudioBufferDelegate>

@property (retain, nonatomic) SimpleAudioPlayer *m_audioPlayer;
@property (retain, nonatomic) id<AudioDataRead> m_audioData;
@property (nonatomic) int m_currentPcmBytePos;
@property (nonatomic) struct AMRDecodeFloat { void *x0; } *m_decoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updatePath:(id)a0;
- (void)updateData:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (void)prepareDecoder;
- (unsigned int)fillPcmBuffer:(short *)a0 bufferSize:(unsigned int)a1;
- (void)onAudioBufferPlayEnd;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (void).cxx_destruct;

@end
