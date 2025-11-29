@class NSString, MMTimer;
@protocol AudioPlayerDelegate, AudioCodecProtocol;

@interface AudioQueuePlayer : NSObject <AudioPlayerProtocol> {
    struct AudioQueuePlayerState { struct OpaqueAudioQueue *x0; struct AudioQueueBuffer *x1[3]; unsigned int x2; unsigned int x3; unsigned int x4; BOOL x5; } *mAqData;
    BOOL m_didPrepareToPlay;
}

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) id<AudioCodecProtocol> codec;
@property (retain, nonatomic) MMTimer *meterTimer;
@property (weak, nonatomic) id<AudioPlayerDelegate> delegate;
@property (nonatomic) long long voiceFormat;
@property (nonatomic) double sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)preparePlayWithFile:(id)a0;
- (void)asyncPreparePlayWithFile:(id)a0 finished:(id /* block */)a1;
- (void)play;
- (void)playAtTime:(unsigned int)a0;
- (void)asyncPlayAtTime:(unsigned int)a0;
- (void)pause;
- (void)resume;
- (void)stop;
- (unsigned int)currentTime;
- (int)getCurrentTimeMs;
- (BOOL)isPlaying;
- (void)setProgress:(unsigned int)a0;
- (int)getCodecTypeFromVoiceFormat:(long long)a0;
- (BOOL)prepareToPlay;
- (void)initCodec;
- (BOOL)initAudioQueue;
- (float)TimerCheckMeter;
- (void)BeginNotifyOnMainThread:(id)a0;
- (void)EndNotifyOnMainThread;
- (void).cxx_destruct;

@end
