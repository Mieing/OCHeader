@class AWETheaterPageContext, NSString, AWEAwemeModel, UIView, AWELiveRoomModel, IESLiveIMPaaSWorker;
@protocol AWELiveStreamPlayer, AWELiveShowTagViewProtocol;

@interface AWETheaterBannerLiveContentCell : AWETheaterBannerBaseContentCell <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, IESLiveIMMessageSubscriber>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (retain, nonatomic) AWETheaterPageContext *liveContext;
@property (nonatomic) BOOL isEnterRoom;
@property (retain, nonatomic) id<AWELiveShowTagViewProtocol> tagViewModel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long viewRight;
@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
@property (nonatomic) double startPlayerTimeV1;
@property (nonatomic) double startPlayerTimeV2;
@property (nonatomic) long long durationV1;
@property (nonatomic) long long durationV2;
@property (nonatomic) BOOL hadReportedPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (BOOL)isVerticalStream;
- (BOOL)isPaidLive;
- (void)setupIMConfigCore;
- (void)trackStreamingPlay;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)trackCellWillDisplay;
- (void)trackCellWillDisappear;
- (id)p_awemeWithLiveRoom;
- (void)makePlayerControllerLayout;
- (void)updatePlayerMuteButtonShow:(BOOL)a0;
- (void)makeTagViewLayout;
- (void)installMessageReceivice;
- (void)uninstallMessageReceivice;
- (void)trackLiveEvent:(id)a0 extraParams:(id)a1;
- (void)trackLiveShowReport;
- (void)trackLiveDuration;
- (void)updatePaidTagType;
- (void)calculateDurationV1;
- (long long)currentPaidTagType;
- (BOOL)playerShouldMute;
- (id)theaterCommonParams;
- (id)liveCommonParams;
- (id)paidLiveCommonParams;
- (void)calculateDurationV2;
- (id)playerCommonParams;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)updateMuteStatus:(BOOL)a0;
- (void)stop;
- (void)reset;
- (void)messageReceived:(id)a0;
- (void)handleTap;
- (void)resetPlayer;

@end
