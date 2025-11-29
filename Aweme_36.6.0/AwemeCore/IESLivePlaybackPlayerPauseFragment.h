@class HTSEventContext, IESLivePlaybackPauseAnimButton, IESLivePlaybackComponentContext, UIView, NSString;

@interface IESLivePlaybackPlayerPauseFragment : IESLivePlaybackComponent <IESLivePlaybackPlayerPauseRouter, IESVSVideoPlayAction, IESLivePlaybackCommentAction, IESLivePlaybackSeekAction, IESLiveAirPlayAction, IESLivePlaybackRoomAction, IESLivePlaybackShareRouter, IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) IESLivePlaybackComponentContext *context;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isStartPlay;
@property (retain, nonatomic) UIView *pauseContainer;
@property (retain, nonatomic) IESLivePlaybackPauseAnimButton *pauseButton;
@property (nonatomic) BOOL receiveRemoteData;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hadAddPauseBtn;
@property (nonatomic) BOOL isPauseByUserClick;
@property (nonatomic) BOOL hadReportShowInPortrait;
@property (nonatomic) BOOL hadReportShowInLandscape;
@property (nonatomic) BOOL willShowSharePanel;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (BOOL)isPauseByUser;
- (BOOL)isPause;
- (void)sharePanelWillShow;
- (void)sharePanelDidDismiss;
- (void)clickActionButton:(id)a0;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)onAirplayStart;
- (void)onAirplayProgressUpdate:(double)a0 duration:(double)a1;
- (void)onAirplayPlay;
- (void)onAirplayPause;
- (void)onSeekEnd;
- (void)onSeekShow;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoRenderStart;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)trackPauseIconShow;
- (void)updateButtonStateIsPlaying:(BOOL)a0 isPortrait:(BOOL)a1;
- (void)trackPauseIconClick;
- (void)commentDidStart;
- (void)commentDidEnd;
- (void)streamChangedWithEpisode:(id)a0;
- (void)vsPlayBackTrackEvent:(id)a0 extraParams:(id)a1;
- (void)p_updatePortraitStream:(BOOL)a0;
- (void)playByPipButtonClick;
- (void)pauseByPipButtonClick;
- (void)hiddenPlayerPause:(BOOL)a0;
- (void)handlePauseButtonContainerForIsLandscape:(BOOL)a0;
- (void)byteCastClickAction;
- (void)videoClickAction;
- (void).cxx_destruct;
- (void)setup;

@end
