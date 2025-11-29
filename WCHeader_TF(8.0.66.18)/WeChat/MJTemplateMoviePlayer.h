@class MJTemplateMoviePlayerConfiguration, NSString, OMJMoviePlayer, UIView;

@interface MJTemplateMoviePlayer : MJTemplateSession <OMJMoviePlayerDelegate>

@property (retain, nonatomic) OMJMoviePlayer *maasMoviePlayer;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) int loopCount;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastStoppedTime;
@property (readonly, copy, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (readonly, nonatomic) MJTemplateMoviePlayerConfiguration *configuration;
@property (readonly, nonatomic) UIView *maasRenderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClipBundleID:(id)a0;
- (id)initWithClipBundleID:(id)a0 configuration:(id)a1;
- (BOOL)createMaasSession;
- (BOOL)_createMaasMoviePlayer;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_tearDownMaasPlayerWithCompletionHandler:(id /* block */)a0;
- (void)_cleanUpMaasPlayerWithCompletionHandler:(id /* block */)a0;
- (void)startCreationWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_startCreationWithClipBundleID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)startPlaybackCompletionHandler:(id /* block */)a0;
- (void)didStartPlayback;
- (void)_startPlaybackCompletionHandler:(id /* block */)a0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 loopCount:(int)a2 isAudioEnabled:(BOOL)a3;
- (void)_setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 loopCount:(int)a2 isAudioEnabled:(BOOL)a3;
- (void)startPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_startPlayingWithCompletionHandler:(id /* block */)a0;
- (void)didStartPlaying;
- (void)stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)willStopPlaying;
- (void)didStopPlaying;
- (void)shutDownPlaybackWithCompletionHandler:(id /* block */)a0;
- (void)_shutDownPlaybackWithCompletionHandler:(id /* block */)a0;
- (void)didShutDownPlayback;
- (void)_didChangePlayStatusTo:(unsigned long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlaybackTime;
- (void)skimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)playbackDidFinishInMoviePlayer:(id)a0;
- (void)moviePlayer:(id)a0 playbackTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 mediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setupNotification;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (void).cxx_destruct;

@end
