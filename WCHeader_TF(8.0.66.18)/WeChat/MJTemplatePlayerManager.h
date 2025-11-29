@class NSString, MJTemplateMoviePlayer, UIView, WCAudioModuleProxy;

@interface MJTemplatePlayerManager : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MJTemplateMoviePlayer *playingPlayer;
@property (weak, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)startPlayingInView:(id)a0 withClipBundleID:(id)a1 isMuted:(BOOL)a2;
- (void)stopPlayingWithClipBundleID:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlaybackTimeWithClipBundleID:(id)a0;
- (void)_stopPlayer:(id)a0;
- (void)_movePlayer:(id)a0 toView:(id)a1;
- (void).cxx_destruct;

@end
