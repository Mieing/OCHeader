@class NSString, MJTemplateMoviePlayer, UIView, WCAudioModuleProxy;

@interface MJClipBundlePlayerManager : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MJTemplateMoviePlayer *playingPlayer;
@property (weak, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPlayingInView:(id)a0 withClipBundleID:(id)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 loopCount:(int)a4 isMuted:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)pausePlayingWithClipBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)onServiceInit;
- (void)stopPlayingWithClipBundleID:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlaybackTimeWithClipBundleID:(id)a0;
- (void)_stopPlayer:(id)a0;
- (void)_movePlayer:(id)a0 toView:(id)a1;
- (void)skimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withClipBundleID:(id)a1;
- (void)snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withClipBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
