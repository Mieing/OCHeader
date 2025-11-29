@class SimpleAudioPlayer, NSString, NSRecursiveLock;
@protocol AudioDataRead;

@interface WavAudioPlayer : CommonPlayer <SimpleAudioBufferDelegate>

@property (retain, nonatomic) SimpleAudioPlayer *m_audioPlayer;
@property (retain, nonatomic) id<AudioDataRead> m_audioData;
@property (nonatomic) unsigned int m_currentReadPos;
@property (nonatomic) double m_sampleRateForBuffer;
@property (nonatomic) unsigned int m_bitsPerChannel;
@property (nonatomic) unsigned int m_framesPerPacket;
@property (nonatomic) unsigned int m_channesPerFrame;
@property (retain, nonatomic) NSRecursiveLock *dataLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSampleRate:(double)a0;
- (id)init;
- (id)initWithSampleRate:(double)a0 bitsPerChannel:(unsigned int)a1 framesPerPacket:(unsigned int)a2 channelsPerFrame:(unsigned int)a3;
- (void)updatePath:(id)a0;
- (void)updateData:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (unsigned int)fillPcmBuffer:(short *)a0 bufferSize:(unsigned int)a1;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (void)onAudioBufferPlayEnd;
- (void).cxx_destruct;

@end
