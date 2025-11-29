@class NSDictionary, NSString, AWEShowVideoPlayerView, AWEAwemeModel, UIView, NSObject, NSNumber;
@protocol AWEShowPlayerControllerDelegate, AWEPaidStreamControlProtocol;

@interface AWEShowVideoPlayerController : NSObject <AWEPaidStreamControlDelegate, AWEShowVideoPlayerViewDelegate, AWEPlayletPaymentMessage, AWEShowMonetizeRefreshHandler, AWEShowPlayerControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEShowVideoPlayerView *videoView;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) BOOL enablePause;
@property (nonatomic) BOOL canShowLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) id player;
@property (readonly, nonatomic) NSObject *model;
@property (weak, nonatomic) id<AWEShowPlayerControllerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic) long long scaleMode;
@property (nonatomic, getter=isMute) BOOL mute;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)setCoverUrl:(id)a0;
- (id)monetizeScene;
- (void)refreshMonetizeContent:(id)a0 reason:(unsigned long long)a1;
- (id)monetizeDataSource;
- (id)monetizeContentTrackParams;
- (id)monetizeContentReferString;
- (BOOL)needReceiveRefreshMonetizeContent;
- (void)updatePlayletPaymentInfoWithModels:(id)a0;
- (void)preparePaidStream;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (id)playerViewControllerForSecurity;
- (void)playerDidStart;
- (void)playerDidStop;
- (void)checkAwemeModelWithParams:(id)a0 block:(id /* block */)a1;
- (BOOL)needControlPlayState;
- (void)clearDefaultStartPlayTime;
- (void)playerDidPause;
- (void)playerDidPlayError:(id)a0;
- (void)playWithParams:(id)a0;
- (void)pauseWithParams:(id)a0;
- (void)stopWithParams:(id)a0;
- (void)seekToTime:(double)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)shouldPause:(BOOL)a0;
- (void)playerDidEnd;
- (void)playerDidStartStall;
- (void)didReceiveLongVideoPaidNotification:(id)a0;
- (void)didReceivePlayletPaidNotification:(id)a0;
- (BOOL)isIAAUnlocked;
- (void)findAndReplaceAwemeList:(id)a0;
- (BOOL)isLongVideoIAAUnlocked;
- (BOOL)isVideoIAAUnlocked;
- (void)playerDidEndStall;
- (void).cxx_destruct;
- (id)init;
- (id)transitionContext;
- (void)reset;
- (void)setup;
- (void)setPlaybackRate:(double)a0;
- (void)updateWithModel:(id)a0;

@end
