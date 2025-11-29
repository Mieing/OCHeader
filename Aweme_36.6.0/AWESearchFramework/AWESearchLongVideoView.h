@class AWEDPlayerConfig, NSMutableDictionary, NSDictionary, NSString, UIView, AWENoxusLongVideoDetailResponseModel, UIViewController;
@protocol AWEDPlayerProtocol, AWENoxusPlayerView, AWESearchLynxElementPlayerDelegate;

@interface AWESearchLongVideoView : UIView <AWENoxusPlayerViewDelegate, AWEDPlayerDelegate>

@property (retain, nonatomic) AWENoxusLongVideoDetailResponseModel *longAwemeModel;
@property (retain, nonatomic) UIView<AWENoxusPlayerView> *playerView;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *generalPlayer;
@property (retain, nonatomic) AWEDPlayerConfig *generalPlayerConfig;
@property (nonatomic) long long tokenErrorRetryTimes;
@property (retain, nonatomic) NSMutableDictionary *paramDic;
@property (nonatomic) double startPlayerTime;
@property (copy, nonatomic) id /* block */ playbackTimeReachingBlock;
@property (nonatomic) BOOL useDPlayer;
@property (copy, nonatomic) NSDictionary *btmInfo;
@property (weak, nonatomic) id<AWESearchLynxElementPlayerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (readonly, nonatomic) double currPlaybackTime;
@property (nonatomic) double playbackRate;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (id)trackParams;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)didPlayError:(id)a0;
- (void)refreshWithModel:(id)a0;
- (id)realDuration;
- (void)noxusPlayerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)updateLogExtra:(id)a0;
- (void)videoPlay;
- (void)videoPause;
- (id)buildDPlayerConfig;
- (void)updateBtmInfo:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)startTrackVideoExperience;
- (void)onPlaybackTimeBlockAction;
- (void)trackLongVideoPlay;
- (void)trackLongVideoPlayFinish;
- (void)trackVideoExperience:(unsigned long long)a0 extraDic:(id)a1;
- (void)trackLongVideoPlayTime;
- (BOOL)openGeneralAutoPlayMonitor;
- (void)endTrackVideoExperience:(unsigned long long)a0 extraDic:(id)a1;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)player;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
