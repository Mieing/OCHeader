@class IESLiveDirectorStreamPushHandler, NSString, IESLiveCountTimer, IESLiveDirectorStatusView, IESLiveCameraDirectorApi;

@interface IESLiveDirectorStatusFragment : IESLiveDirectorComponent <IESLiveDirectorStatusDelegate, IESLiveDirectVolumeEvent>

@property (retain, nonatomic) IESLiveDirectorStreamPushHandler *rtcPushHandler;
@property (retain, nonatomic) IESLiveDirectorStatusView *statusView;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (retain, nonatomic) IESLiveCameraDirectorApi *statusApi;
@property (nonatomic) BOOL isHandlePushStreamSuc;
@property (nonatomic) int roomStatus;
@property (nonatomic) int deviceStatus;
@property (nonatomic) BOOL isUserLocalAudioMuted;
@property (nonatomic) BOOL isRoomPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)comp_applicationWillResignActive;
- (void)comp_applicationDidBecomeActive;
- (void)trackToastShow:(id)a0;
- (void)directorDidPushedStream;
- (void)directorDidDisconnected:(id)a0;
- (void)cleanCountTimer;
- (void)trackPopView:(BOOL)a0 isClickCancel:(BOOL)a1;
- (void)muteDirectorAudioByUser:(BOOL)a0;
- (void)loadDirectorStreamPushProcessor;
- (void)setupStatusView;
- (void)handleLocalVideoAndAudio:(BOOL)a0;
- (double)statusItemTopOffset;
- (void)handleCloseDirectorRoom:(BOOL)a0;
- (void)closeDirectorRoom:(BOOL)a0;
- (void)handleCloseRoom:(id)a0;
- (void)handleFetchStatus:(id)a0;
- (void)handleRoomPaused:(int)a0 deviceStatus:(int)a1;
- (void)handleDirectorPlay:(int)a0;
- (void)handleToast:(BOOL)a0;
- (void)directorStreamVolume:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)scheduleState;
- (void)fetchStatus;

@end
