@class AWELiveVSEpisode, UIButton, NSString, AWEPLVPageContext, UIView, UITapGestureRecognizer;
@protocol AWELiveVideoPreviewStreamPlayerProtocol, AWELiveShowTagViewProtocol;

@interface AWEPadPolymericChannelBannerReplayCellView : UIView <AWELiveVideoPreviewStreamPlayerDelegate, AWELiveVideoPreviewStreamPaidDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) id<AWELiveVideoPreviewStreamPlayerProtocol> playerController;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (retain, nonatomic) id<AWELiveShowTagViewProtocol> tagViewModel;
@property (nonatomic) long long viewRight;
@property (nonatomic) BOOL notFirstFrame;
@property (nonatomic) BOOL viewDidShow;
@property (nonatomic) long long startPlayTime;
@property (nonatomic) long long watchDuration;
@property (copy, nonatomic) id /* block */ addCoverImage;
@property (copy, nonatomic) id /* block */ removeCoverImage;
@property (copy, nonatomic) id /* block */ enableAutoCarousel;
@property (retain, nonatomic) AWEPLVPageContext *liveContext;
@property (retain, nonatomic) UIButton *volumeSwitch;
@property (retain, nonatomic) UIView *tagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerControllerPlayFinished:(id)a0;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)viewStatusDidChange:(long long)a0;
- (void)freeTrialFinish;
- (void)viewDidDisplay;
- (void)makePlayerControllerLayout;
- (void)makeTagViewLayout;
- (void)trackLiveEvent:(id)a0 extraParams:(id)a1;
- (BOOL)playerShouldMute;
- (id)theaterCommonParams;
- (void)recordPlaybackCurrentTime;
- (id)replayCommonParams;
- (id)playbackLogExtraDict;
- (void)updateVolumeSwitch;
- (void)handleClickVolumeSwitch;
- (void)viewDidEndDisplay;
- (void)refreshUIAfterEpisodeReceived;
- (void)viewHandleTap;
- (void)updateWithEpisodeStr:(id)a0;
- (void)updateCostTagType;
- (void)trackPlayDuration:(BOOL)a0;
- (BOOL)isCostLive;
- (long long)currentCostTagType;
- (id)costLiveCommonParams;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (void)setupUI;
- (void)resetPlayer;

@end
