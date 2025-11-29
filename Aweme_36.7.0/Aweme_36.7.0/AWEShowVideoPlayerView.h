@class AWEAwemeModel, NSString, UIView, NSURL, NSDictionary, NSObject, UIViewController, NSNumber;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEShowVideoPlayerViewDelegate;

@interface AWEShowVideoPlayerView : UIView <AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate>

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject *screenCaptureBlocker;
@property (nonatomic) BOOL needInheritedGlobalProgress;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic, getter=isMute) BOOL mute;
@property (nonatomic) double volume;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (nonatomic) double currentPlayTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double playbackRate;
@property (retain, nonatomic) NSURL *coverUrl;
@property (weak, nonatomic) id<AWEShowVideoPlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillStartNextLoop:(id)a0;
- (void)playerDidStopped:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (double)currPlaybackTime;
- (void)updateWithAwemeModel:(id)a0;
- (id)realDuration;
- (void)bindObserver;
- (long long)getScaleModelWithAwemodel:(id)a0;
- (long long)videoActionState;
- (BOOL)isPlayerUnplayedStatus;
- (unsigned long long)currentResolutionType:(id)a0;
- (void)updatePlayerResolutionBeforeStartPlay;
- (void)seekVideoStartToDefault;
- (BOOL)isPlayerCompleted;
- (void)addVideoErrorView;
- (BOOL)awemeAddLynxOnView;
- (void)clearDefaultStartPlayTime;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (BOOL)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupSubviews;
- (long long)playState;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
