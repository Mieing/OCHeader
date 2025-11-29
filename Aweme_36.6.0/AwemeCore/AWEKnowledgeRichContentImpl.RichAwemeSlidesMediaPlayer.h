@class UIViewController;
@protocol AWEAwemePlayVideoTrackProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AWEKnowledgeRichContentImpl.RichAwemeSlidesMediaPlayer : NSObject <AWEAwemeBaseVCMediaPlayerProtocol> {
    void /* unknown type, empty encoding */ cardToken;
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
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)setupWithModel:(id)a0;
- (void)onPlayerSingleClick:(BOOL)a0;
- (void)preparePinchZoomTransition:(id)a0;
- (void)resetVideoController;
- (void)configBeforEnterLandscapeFeedWithShouldCheck:(BOOL)a0 fromPinch:(BOOL)a1;
- (void)configAfterQuitFromLandscapeFeed:(id)a0;
- (void)setCityInfo:(id)a0;
- (void)setPreloadController:(id)a0;
- (BOOL)handlePlayerSingleClicked:(id)a0;
- (id)containerTransitionContext;
- (long long)shouldHandlePinchToDoubleColumnWithModel:(id)a0;
- (long long)shouldStartPinchInteractiveTranstionForZoomType:(unsigned long long)a0 gestureRecognizer:(id)a1;
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
- (id)initWithMediaType:(long long)a0 andContainer:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
