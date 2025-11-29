@class NSNumber, NSString, UIImageView, AWEAwemeModel, UIView, AWESearchPaymentVideoMaskV2View, NSDictionary;
@protocol AWELongVideoPlayerViewProtocol, AWESearchLynxElementPlayerDelegate;

@interface AWESearchLongVideoViewV2 : UIView <AWELongVideoPlayerViewDelegate>

@property (retain, nonatomic) UIView<AWELongVideoPlayerViewProtocol> *playerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) double startPlayerTime;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchPaymentVideoMaskV2View *paymentVideoMaskV2;
@property (nonatomic) BOOL didPaymentVideoPreviewEndTriggered;
@property (copy, nonatomic) NSDictionary *btmInfo;
@property (weak, nonatomic) id<AWESearchLynxElementPlayerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) double currPlaybackTime;
@property (nonatomic) long long playState;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (id)realDuration;
- (void)videoFinishUpdate:(id)a0 videoController:(id)a1;
- (void)didStartShowing;
- (void)updateLogExtra:(id)a0;
- (void)viewWillDisAppear;
- (void)videoPause;
- (void)playerDidStop:(id)a0;
- (void)playerDidPause:(id)a0;
- (void)playerDidEnd:(id)a0;
- (void)player:(id)a0 didPlayError:(id)a1;
- (void)playerDidStartStall:(id)a0;
- (void)player:(id)a0 playTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (BOOL)shouldRVDTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)addObserverForPaymentVideoIfNeeded;
- (BOOL)blockPlayForPaymentVideo;
- (void)updateWithPaidAwemeModel:(id)a0;
- (void)updateBtmInfo:(id)a0;
- (void)trackLongVideoPlay;
- (void)trackLongVideoPlayFinish;
- (void)trackLongVideoPlayTime;
- (void)trackLongVideoLvShow;
- (void)checkPreviewEndIfNeeded;
- (void)notifyChangeEpisode;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)playerDidStart:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
