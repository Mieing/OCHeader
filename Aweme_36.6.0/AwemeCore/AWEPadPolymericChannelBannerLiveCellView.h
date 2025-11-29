@class IESLiveIMPaaSWorker, NSString, UIButton, AWEPLVPageContext, UIView, AWELiveRoomModel, UITapGestureRecognizer;
@protocol AWELiveStreamPlayer, AWELiveShowTagViewProtocol;

@interface AWEPadPolymericChannelBannerLiveCellView : UIView <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, IESLiveIMMessageSubscriber>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (nonatomic) BOOL isEnterRoom;
@property (copy, nonatomic) NSString *roomStr;
@property (retain, nonatomic) id<AWELiveShowTagViewProtocol> tagViewModel;
@property (nonatomic) long long viewRight;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
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

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (void)viewDidDisplay;
- (BOOL)isVerticalStream;
- (void)setupIMConfigCore;
- (void)uninstallMessageReceive;
- (void)installMessageReceive;
- (id)p_awemeWithLiveRoom;
- (void)makePlayerControllerLayout;
- (void)makeTagViewLayout;
- (void)trackLiveEvent:(id)a0 extraParams:(id)a1;
- (void)trackLiveShowReport;
- (BOOL)playerShouldMute;
- (id)theaterCommonParams;
- (id)liveCommonParams;
- (id)playerCommonParams;
- (void)updateVolumeSwitch;
- (void)handleClickVolumeSwitch;
- (void)viewDidEndDisplay;
- (void)updateWithRoomStr:(id)a0;
- (void)refreshUIAfterEpisodeReceived;
- (void)viewHandleTap;
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
- (void)messageReceived:(id)a0;
- (void)resetPlayer;

@end
