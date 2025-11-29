@class NSString, UIView;
@protocol RTVVideoPlayerDelegate, RxInjector, IESVideoPlayerProtocol;

@interface __RTVVideoPlayer : NSObject <IESVideoPlayerDelegate, RTVVideoPlayerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVVideoPlayerDelegate> playerDelegate;
@property (readonly, nonatomic) double currPlaybackTime;
@property (readonly, nonatomic) UIView *playerView;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (long long)__playbackActionFromIESPlaybackAction:(long long)a0;
- (long long)__stallActionFromIESStallAction:(long long)a0;
- (void)resetVideoID:(id)a0 videoURL:(id)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)prepareToPlay;

@end
