@class AWELiveVSEpisode, AWETheaterPageContext, NSString, UIView;
@protocol AWELiveVideoPreviewStreamPlayerProtocol, AWELiveShowTagViewProtocol;

@interface AWETheaterBannerPlaybackContentCell : AWETheaterBannerBaseContentCell <AWELiveVideoPreviewStreamPlayerDelegate, AWELiveVideoPreviewStreamPaidDelegate>

@property (retain, nonatomic) id<AWELiveVideoPreviewStreamPlayerProtocol> playerController;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) AWETheaterPageContext *liveContext;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (retain, nonatomic) id<AWELiveShowTagViewProtocol> tagViewModel;
@property (retain, nonatomic) UIView *tagView;
@property (nonatomic) long long viewRight;
@property (nonatomic) double startPlayerTimeV1;
@property (nonatomic) double startPlayerTimeV2;
@property (nonatomic) long long durationV1;
@property (nonatomic) long long durationV2;
@property (nonatomic) BOOL hadReportedPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerControllerPlayFinished:(id)a0;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)viewStatusDidChange:(long long)a0;
- (void)freeTrialFinish;
- (BOOL)isPaidLive;
- (void)trackStreamingPlay;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)trackCellWillDisplay;
- (void)trackCellWillDisappear;
- (void)makePlayerControllerLayout;
- (void)updatePlayerMuteButtonShow:(BOOL)a0;
- (void)makeTagViewLayout;
- (void)trackLiveEvent:(id)a0 extraParams:(id)a1;
- (void)trackLiveDuration;
- (void)updatePaidTagType;
- (void)calculateDurationV1;
- (long long)currentPaidTagType;
- (id)theaterCommonParams;
- (id)paidLiveCommonParams;
- (void)calculateDurationV2;
- (void)recordPlaybackCurrentTime;
- (id)replayCommonParams;
- (id)playbackLogExtraDict;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)updateMuteStatus:(BOOL)a0;
- (void)stop;
- (void)reset;
- (void)dealloc;
- (void)handleTap;
- (void)resetPlayer;

@end
