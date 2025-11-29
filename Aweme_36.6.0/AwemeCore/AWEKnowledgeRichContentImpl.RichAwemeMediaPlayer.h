@class UIViewController;
@protocol AWEAwemePlayVideoTrackProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AWEKnowledgeRichContentImpl.RichAwemeMediaPlayer : NSObject <BDChainLogNodeHostProtocol, AWEAwemeBaseVCMediaPlayerProtocol> {
    void /* unknown type, empty encoding */ cardToken;
    void /* unknown type, empty encoding */ sceneToken;
}

@property (nonatomic, weak) void /* function */ container;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
@property (nonatomic, weak) void /* function */ mediaDelegate;
@property (nonatomic) BOOL forbidUpdateVideoModel;

+ (long long)defaultMediaTypeInContainer:(id)a0;
+ (BOOL)shouldHandleModel:(id)a0 inContainer:(id)a1;
+ (long long)mediaTypeForModel:(id)a0 inContainer:(id)a1;
+ (id)mediaPlayerForModel:(id)a0 inContainer:(id)a1;

- (id)chainLogNodeParams;
- (void)configBeforEnterLandscapeFeedWithShouldCheck:(BOOL)a0 fromPinch:(BOOL)a1;
- (void)configAfterQuitFromLandscapeFeed:(id)a0;
- (void)containerViewDidChangeBreakPoint;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setLogExtra:(id)a0;
- (void)setAdEventName:(id)a0;
- (void)setDefaultSeekToTime:(double)a0;
- (void)setStoryDelegate:(id)a0;
- (void)setCityInfo:(id)a0;
- (void)setPreloadController:(id)a0;
- (void)setMediaPlayEnableIfNeeded:(BOOL)a0;
- (void)setMediaPlayerPinchingIfNeeded:(BOOL)a0;
- (id)getVideoSnapshotImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVideoContentProperFrameForPinch;
- (id)pinchTransitionBackgroundColor;
- (void)preparePinchZoomTransition:(id)a0;
- (long long)shouldHandlePinchToDoubleColumnWithModel:(id)a0;
- (long long)shouldStartPinchInteractiveTranstionForZoomType:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)backgroundViewForPinch:(id)a0 inContainerView:(id)a1;
- (id)targetViewForPinchWithContainerView:(id)a0;
- (void)updateToContainerForPinchWithPureModeVC:(id)a0;
- (void)updateOutContainerForPinchWithPureModeVC:(id)a0 andPlayerController:(id)a1;
- (void)recoverFromContainerWithPureModeVC:(id)a0;
- (void)outerPinchTransitionDidFinish;
- (void)pinchToC2FeedEnd:(BOOL)a0;
- (void)resetPinchToC2Feed;
- (id)containerTransitionContext;
- (BOOL)handlePlayerSingleClicked:(id)a0;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)holdStop;
- (void)updatePlayerIfNeeded;
- (void)pauseIfNotStop;
- (void)pauseWithAnimationUsingCustomPauseIcon:(id)a0;
- (void)onPlayerSingleClick:(BOOL)a0;
- (void)resetVideoController;
- (void)updatePlayerLogConfig:(long long)a0;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)pauseIfPlaying;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;
- (id)currentAwemeModel;
- (void)setupWithModel:(id)a0;
- (BOOL)isInMediaPlayer:(id)a0;
- (void)setupPlayer;
- (id)initWithMediaType:(long long)a0 andContainer:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
