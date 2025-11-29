@class NSString, AVPlayerLayer, NSNumber, TAVMediaPlayer;
@protocol MAVVideoCompositionPlayerDelegate;

@interface MAVVideoCompositionPlayer : NSObject <TAVMediaPlayerObserver>

@property (retain, nonatomic) TAVMediaPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) NSNumber *id;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playRange;
@property (nonatomic) BOOL loop;
@property (weak, nonatomic) id<MAVVideoCompositionPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComposition:(id)a0;
- (void)dealloc;
- (void)updateComposition:(id)a0;
- (void)updateComposition:(id)a0 withPlay:(BOOL)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setProgressInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isPlaying;
- (void)muteOrigin:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)refreshSurface;
- (void)stop;
- (void)destory;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)mediaPlayerDidPlayToEnd:(id)a0;
- (void)mediaPlayer:(id)a0 progressDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)mediaPlayer:(id)a0 stateDidChange:(long long)a1;
- (void)mediaPlayer:(id)a0 playerDidReset:(id)a1;
- (void)callbackPlayStarted;
- (void)callbackPlayStopped;
- (void)callbackPlayCompleted;
- (void)callbackPlayError;
- (void).cxx_destruct;

@end
