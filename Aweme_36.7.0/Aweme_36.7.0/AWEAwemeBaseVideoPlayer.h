@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEPlayVideoDelegate, AWEAwemeBizPlayVideoProtocol, AFDRichContentContainerDelegate, AWEAwemeBaseVCMediaPlayerContainerProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWEAwemeBaseVideoPlayer : NSObject <AWEAwemeBaseVCMediaPlayerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) UIViewController<AWEAwemeBaseVCMediaPlayerContainerProtocol> *container;
@property (readonly, nonatomic) long long mediaType;
@property (weak, nonatomic) id<AWEPlayVideoDelegate, AFDRichContentContainerDelegate> mediaDelegate;
@property (nonatomic) BOOL forbidUpdateVideoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultMediaTypeInContainer:(id)a0;
+ (BOOL)shouldHandleModel:(id)a0 inContainer:(id)a1;
+ (long long)mediaTypeForModel:(id)a0 inContainer:(id)a1;
+ (id)mediaPlayerForModel:(id)a0 inContainer:(id)a1;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)holdStop;
- (void)setLogExtra:(id)a0;
- (void)setAdEventName:(id)a0;
- (void)updatePlayerIfNeeded;
- (void)pauseIfNotStop;
- (void)pauseWithAnimationUsingCustomPauseIcon:(id)a0;
- (void)setDefaultSeekToTime:(double)a0;
- (void)setStoryDelegate:(id)a0;
- (id)initWithMediaType:(long long)a0 andContainer:(id)a1;
- (void)setupWithModel:(id)a0;
- (void)onPlayerSingleClick:(BOOL)a0;
- (void)preparePinchZoomTransition:(id)a0;
- (void)resetVideoController;
- (void)configBeforEnterLandscapeFeedWithShouldCheck:(BOOL)a0 fromPinch:(BOOL)a1;
- (void)configAfterQuitFromLandscapeFeed:(id)a0;
- (void)setCityInfo:(id)a0;
- (void)setPreloadController:(id)a0;
- (id)containerTransitionContext;
- (long long)shouldHandlePinchToDoubleColumnWithModel:(id)a0;
- (long long)shouldStartPinchInteractiveTranstionForZoomType:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)recreateMediaPlayer:(id)a0;
- (void)updateToContainerForPinchWithPureModeVC:(id)a0;
- (void)updateOutContainerForPinchWithPureModeVC:(id)a0 andPlayerController:(id)a1;
- (void)pinchToC2FeedEnd:(BOOL)a0;
- (void)resetPinchToC2Feed;
- (void)updatePlayerLogConfig:(long long)a0;
- (id)getVideoSnapshotImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVideoContentProperFrameForPinch;
- (id)executeCommand:(unsigned long long)a0 param:(id)a1;
- (BOOL)enableVideoVCResetLayout;
- (BOOL)enableStopIOWhenCellPause;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)pauseIfPlaying;
- (void)setupPlayer;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
