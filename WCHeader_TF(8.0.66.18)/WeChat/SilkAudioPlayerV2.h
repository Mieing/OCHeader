@class SimpleAudioPlayer, NSString;
@protocol AudioDataRead;

@interface SilkAudioPlayerV2 : CommonPlayer <SimpleAudioBufferDelegate>

@property (retain, nonatomic) SimpleAudioPlayer *m_audioPlayer;
@property (retain, nonatomic) id<AudioDataRead> m_audioData;
@property (nonatomic) int m_sampleRate;
@property (nonatomic) int m_currentPcmBytePos;
@property (nonatomic) struct AudioDecoder { void *x0; void *x1; int x2; char *x3; int x4; int x5; int x6; int x7; int x8; void *x9; int x10; int x11; int x12; int x13; void *x14; } *m_decoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)updatePath:(id)a0;
- (void)updateData:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (double)duration;
- (void)prepareSilkBuffer;
- (unsigned int)fillPcmBuffer:(short *)a0 bufferSize:(unsigned int)a1;
- (void)onAudioBufferPlayEnd;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (void).cxx_destruct;

@end
