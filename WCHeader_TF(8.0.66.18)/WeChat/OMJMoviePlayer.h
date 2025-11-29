@protocol OMJMoviePlayerDelegate;

@interface OMJMoviePlayer : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) int loopCount;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) struct shared_ptr<XMJMoviePlayer> { struct XMJMoviePlayer *__ptr_; struct __shared_weak_count *__cntrl_; } backingPlayer;
@property (nonatomic) struct shared_ptr<XMJRenderView> { struct XMJRenderView *__ptr_; struct __shared_weak_count *__cntrl_; } backingRenderView;
@property (weak, nonatomic) id<OMJMoviePlayerDelegate> delegate;

- (id)initWithBackingPlayer:(const void *)a0;
- (id)renderView;
- (BOOL)connectToRenderView:(const void *)a0 error:(id *)a1;
- (void)setupPlaybackTimeDidChangeCallback;
- (void)setupPlaybackDidFinishCallback;
- (id)startMovieCreationWithClipBundleID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)cancelMovieCreationWithCompletionHandler:(id /* block */)a0;
- (id)teardownWithCompletionHandler:(id /* block */)a0;
- (id)startupPlaybackWithCompletionHandler:(id /* block */)a0;
- (id)shutdownPlaybackWithCompletionHandler:(id /* block */)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlaybackTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playbackDuration;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 loopCount:(int)a2 isAudioEnabled:(BOOL)a3;
- (id)startPlayingWithCompletionHandler:(id /* block */)a0;
- (id)stopPlayingWithCompletionHandler:(id /* block */)a0;
- (id)skimTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)updateIsAudioMuted:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
