@class NSString, NSData, NSURL, WAOpenALAudioDecodeInfo;
@protocol IWAAudioPlayerDelegate, WAAudioSource;

@interface WAGameAudioPlayer : MMObject <WAAudioSourceDelegate, WAAudioPlayerInterface> {
    long long _state;
}

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *audioId;
@property (retain, nonatomic) NSString *src;
@property (nonatomic) double startTime;
@property (nonatomic) double bufferTime;
@property (nonatomic) BOOL obeyMuteSwitch;
@property (nonatomic) double volume;
@property (retain) NSData *fileData;
@property (retain) WAOpenALAudioDecodeInfo *alDecodeInfo;
@property (retain) id<WAAudioSource> source;
@property (weak, nonatomic) id<IWAAudioPlayerDelegate> delegate;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL autoLoop;
@property (nonatomic) BOOL autoPlay;
@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double curTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long state;

- (void)dealloc;
- (id)initWithAudioId:(id)a0 appId:(id)a1 delegate:(id)a2;
- (void)setPlayerWithSrc:(id)a0 url:(id)a1 startTime:(double)a2 autoPlay:(BOOL)a3 loop:(BOOL)a4 obeyMuteSwitch:(BOOL)a5 volume:(double)a6 fileData:(id)a7 playbackRate:(double)a8 referrer:(id)a9;
- (void)play;
- (void)pause;
- (void)forcePause;
- (void)stop;
- (void)seekTo:(double)a0;
- (BOOL)isSet;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)isWaiting;
- (BOOL)isIdle;
- (BOOL)backgroundLoadData:(id)a0 src:(id)a1;
- (BOOL)bUseOpenAL;
- (void)initSourceOnMainThread;
- (void)endLoad;
- (void)setState:(long long)a0 error:(id)a1;
- (void)setOpenALContext;
- (void)sourceStartPlaying:(id)a0;
- (void)sourcePaused:(id)a0;
- (void)sourceStop:(id)a0;
- (void)sourceSeeking:(id)a0;
- (void)sourceSeeked:(id)a0;
- (void)sourceDidFinishPlaying:(id)a0;
- (void)sourceDidError:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
