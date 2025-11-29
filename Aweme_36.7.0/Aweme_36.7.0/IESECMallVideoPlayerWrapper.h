@class NSString, IESECVideoPlayerController, UIView;
@protocol IESECMallVideoProtocol, IESECMallVideoPlayerWrapperDelegate;

@interface IESECMallVideoPlayerWrapper : NSObject <IESECVideoPlayerControllerDelegate, IESECMallVideoDelegate>

@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL needAddCustomTimer;
@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) UIView<IESECMallVideoProtocol> *videoPlayer;
@property (retain, nonatomic) IESECVideoPlayerController *videoPlayerController;
@property (nonatomic) BOOL douyinUseNewVideoPlayer;
@property (retain, nonatomic) NSString *playerTag;
@property (retain, nonatomic) NSString *playerSubTag;
@property (copy, nonatomic) id /* block */ updateTimeBlock;
@property (weak, nonatomic) id<IESECMallVideoPlayerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hidePauseIcon;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (void)setCurrentPlaybackTime:(double)a0 complete:(id /* block */)a1;
- (void)playOrPause;
- (void)didError:(id)a0;
- (id)zoomTransitionStartViewToInner:(BOOL)a0;
- (double)ipadSizeScale;
- (BOOL)zoomOuterWithShrink;
- (double)transitionCornerRadius;
- (double)customTimerPeriodic;
- (void)updateWithVideoData:(id)a0;
- (id)configDataControllerWithRouterParams:(id)a0;
- (void)requestFirstAwemeCompleteWithAweme:(id)a0;
- (void)updateWithVideoData:(id)a0 coverImage:(id)a1;
- (void)enterDetailWithPlayer:(id)a0 routerParams:(id)a1;
- (void)playerController:(id)a0 updateCurrent:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)updateVideoWithVideoDataDict:(id)a0 trackParams:(id)a1;
- (void)setPlayerTag:(id)a0 playerSubTag:(id)a1;
- (void)reloadVideoID:(id)a0 playURLs:(id)a1;
- (void)updateVideoWithVideoData:(id)a0 trackParams:(id)a1 nickname:(id)a2 coverImage:(id)a3;
- (void)enterDetailWithRouterParams:(id)a0;
- (void)reloadLocalURL:(id)a0;
- (void)videoReadyToDisplayOfPlayerController:(id)a0;
- (id)model;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)endTransition;
- (id)init;
- (void)stop;
- (void)setViewController:(id)a0;
- (id)viewController;
- (void)setMute:(BOOL)a0;
- (void)prepareToPlay;
- (void)didStart;
- (void)setRepeat:(BOOL)a0;

@end
