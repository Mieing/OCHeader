@class AWELiveVSEpisode, NSString, NSDictionary, BDXBridgeEventSubscriber, UIView, AWEAwemeModel;
@protocol AWELiveVSVideoPlayerProtocol, AWESearchVSVideoViewPlayerDelegate;

@interface AWESearchVSVideoView : UIView <AWELiveSearchVSVideoPlayerDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWELiveVSVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (nonatomic) double startPlayerTime;
@property (retain, nonatomic) UIView *grayContainerView;
@property (nonatomic) BOOL shouldShowPaidInfo;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) UIView *vsWatermarkView;
@property (weak, nonatomic) id<AWESearchVSVideoViewPlayerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (readonly, nonatomic) double currPlaybackTime;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double startPosition;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playStateDidChange:(long long)a1;
- (void)playerController:(id)a0 playError:(id)a1;
- (void)playerControllerPlayFinished:(id)a0;
- (void)onStalledStart:(id)a0 actionType:(unsigned long long)a1 reason:(long long)a2;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)updateLogExtra:(id)a0;
- (void)videoPlay;
- (void)videoPause;
- (void)addWatermark;
- (void)subscribEvent;
- (id)URLStringForEpisodePurchase;
- (void)trackVSTryEndPageGoBuyClick;
- (void)trackVSTryEndPageShow;
- (void)updateWithPaidInfo:(id)a0;
- (void)checkPaidStatus;
- (void)openPurchaseWebView;
- (void)resumePlayCausePaid;
- (void)enterVSRoom;
- (void)trackVSVideoPlayDuration;
- (void)trackVSVideoPlay;
- (void)stopPlayCausePaid;
- (id)trackForPad:(id)a0;
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
