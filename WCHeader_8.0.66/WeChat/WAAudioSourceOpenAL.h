@class NSString, WAOpenALBuffer, MMTimer;
@protocol WAAudioSourceDelegate;

@interface WAAudioSourceOpenAL : NSObject <WAAudioSource> {
    unsigned int _sourceId;
    WAOpenALBuffer *_buffer;
    MMTimer *_endTimer;
    float _startTime;
    double _volume;
    BOOL _delayPaused;
}

@property (nonatomic) double delayCallEndedSec;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *src;
@property (nonatomic) long long state;
@property (nonatomic) float duration;
@property (nonatomic) float currentTime;
@property (nonatomic) BOOL obeyMuteSwitch;
@property (nonatomic) BOOL loop;
@property (weak, nonatomic) id<WAAudioSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAudioId:(id)a0 src:(id)a1 decodeInfo:(id)a2 appId:(id)a3;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)forcePause;
- (void)stop;
- (void)seek:(double)a0;
- (void)setLooping:(BOOL)a0;
- (void)setVolume:(float)a0;
- (void)setPlaybackRate:(float)a0;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (void)ended:(id)a0;
- (void)assertMainThreadAndPrintLogWithFunctionName:(const char *)a0;
- (void).cxx_destruct;

@end
