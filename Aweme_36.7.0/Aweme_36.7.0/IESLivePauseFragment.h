@class IESLiveVSPauseAnimButton, NSString, UIView;
@protocol IESLivePauseAction;

@interface IESLivePauseFragment : IESLiveRoomComponent <IESLivePlayerPauseRouter, HTSLiveStreamPlayerAction, IESLiveSeekAction, IESLiveAirPlayAction, IESLivePipActions>

@property (nonatomic) BOOL isStartPlay;
@property (retain, nonatomic) UIView *pauseContainer;
@property (retain, nonatomic) IESLiveVSPauseAnimButton *pauseButton;
@property (nonatomic) BOOL receiveRemoteData;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hadAddPauseBtn;
@property (nonatomic) BOOL isPauseByUserClick;
@property (nonatomic) BOOL hadReportShowInPortrait;
@property (nonatomic) BOOL hadReportShowInLandscape;
@property (weak, nonatomic) id<IESLivePauseAction> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (void)willShowStageForPipModel:(id)a0;
- (BOOL)isPauseByUser;
- (void)addNotification;
- (BOOL)isPause;
- (void)onStreamPause;
- (void)streamPlayerDidReadyToRender;
- (void)onStreamPlay;
- (void)onStreamStop;
- (void)clickActionButton:(id)a0;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)onAirplayStart;
- (void)onAirplayProgressUpdate:(double)a0 duration:(double)a1;
- (void)onAirplayPlay;
- (void)onAirplayPause;
- (void)onSeekEnd;
- (void)onSeekShow;
- (BOOL)isJoiningChorus;
- (void)trackPauseIconShow;
- (void)updateButtonStateIsPlaying:(BOOL)a0 isPortrait:(BOOL)a1;
- (void)trackPauseIconClick;
- (void)streamClickAction;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)setup;

@end
