@class ACCCutSamePlayerControlView, AWESelectTemplateViewProvider, ACCButton, NSString, UIView, ACCStickerContainerView, AWESelectTemplateViewModel;
@protocol ACCStickerServiceProtocol, ACCEditServiceProtocol;

@interface AWESelectTemplatePlayerViewModel : NSObject <LVPlayerDelegate, ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) ACCCutSamePlayerControlView *controlView;
@property (nonatomic) BOOL pauseByGesture;
@property (nonatomic) BOOL playerNeedReload;
@property (nonatomic) BOOL hasEnteredBackground;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playerPauseTime;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (nonatomic) double containerScale;
@property (nonatomic) struct CGPoint { double x; double y; } containerCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerRect;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplateViewProvider *viewProvider;
@property (retain, nonatomic) UIView *playerCanvas;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) ACCButton *playPauseButton;
@property (copy, nonatomic) id /* block */ playerTimeCallback;
@property (copy, nonatomic) id /* block */ playerPauseCallback;
@property (copy, nonatomic) id /* block */ playerPlayCallback;
@property (copy, nonatomic) id /* block */ resetEditPagePlayerViewAndMusic;
@property (copy, nonatomic) id /* block */ updateVideoDataCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)resetEditSessionWithPublishModel:(id)a0;
- (void)playStatusChanged:(long long)a0;
- (void)playerDidPlay;
- (void)playerDidPause;
- (void)configScale;
- (long long)p_getSuggestedRepeatCount;
- (void)playIfPauseByEnterBackground;
- (void)pauseByGestureAction;
- (void)updateVideoData;
- (void)setupOriginVideoPlayer;
- (void)commitNLEModelWithCompletion:(id /* block */)a0;
- (void)controlViewAdd;
- (void)controlViewRemove;
- (void)commitNLEModel;
- (void)configExclusiveStickerContainers;
- (void)resetOriginVideoPlayer;
- (void)resetCutSamePlayer;
- (void)updateExclusiveStickerContainerStickerHiddenStatusWithCurrentPlayerTime:(double)a0;
- (void)onPlayPauseButtonAction:(id)a0;
- (void)recoverEnterCutSameData;
- (void)setupEditPlayer:(id)a0 stickerService:(id)a1 stickerContainerView:(id)a2;
- (void)setupCutSamePlayer;
- (void)setPlayerWhenAppear;
- (void)recoverEditPlayer;
- (void)resetEnterCutSamePlayer;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)replay;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;

@end
