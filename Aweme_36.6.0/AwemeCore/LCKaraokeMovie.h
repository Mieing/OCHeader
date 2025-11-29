@class NSString, LiveCore;
@protocol LCPlayerProtocol, LCKaraokeMovieDelegate;

@interface LCKaraokeMovie : NSObject <LCPlayerDelegate> {
    LiveCore *_liveCore;
    id<LCPlayerProtocol> _player;
}

@property (nonatomic) BOOL firstVideoReceived;
@property (weak, nonatomic) id<LCKaraokeMovieDelegate> delegate;
@property (nonatomic) BOOL forceSendFirstFrameTwice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)setKaraokeVideoMixerDescription:(long long)a0 withPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setEnableKaraokeMovieAudioPitchShifter:(BOOL)a0;
- (BOOL)isEnableKaraokeMovieAudioPitchShifter;
- (void)setKaraokeMoviePitch:(double)a0;
- (void)setKaraokeVideoMixerDescription:(long long)a0 zOrder:(int)a1 withPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)pushKaraokeMovieBuffer:(struct __CVBuffer { } *)a0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)pushKaraokeMovieAudioBuffer:(float **)a0 samples:(int)a1;
- (void)prepareKaraokeMovieAudio:(int)a0 channels:(int)a1;
- (void)setKaraokeMixVolume:(float)a0 captureVolume:(float)a1;
- (void)setKaraokePlayVolume:(float)a0;
- (float)getCurrentPlayTime;
- (void)seekPlayerTimeTo:(double)a0;
- (float)getTotalPlayTime;
- (void)mute:(BOOL)a0;
- (void)videoPlayerDidFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 loadStateDidChanged:(long long)a1;
- (id)initWithLiveCore:(id)a0 player:(id)a1;
- (void)setMovieRenderView:(id)a0;
- (void)videoWrapperRelease;
- (void)audioWrapperRelease;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)restart;
- (void)prepare;
- (void)resume;
- (void)dealloc;
- (void)setLocalURL:(id)a0;
- (float)getVolume;

@end
