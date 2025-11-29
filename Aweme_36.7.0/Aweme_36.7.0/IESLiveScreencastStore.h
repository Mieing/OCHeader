@class HTSEventContext, IESLiveCountTimer, IESLiveScreencastPushStreamHandler, IESLiveGCDTimer, NSMutableArray, NSString;
@protocol IESLiveRoomService;

@interface IESLiveScreencastStore : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL needShowExtensionDisconnectedAlert;
@property (nonatomic) BOOL needScreencastRestartPassive;
@property (retain, nonatomic) IESLiveScreencastPushStreamHandler *streamHandler;
@property (nonatomic) BOOL closeByExtension;
@property (nonatomic) BOOL stopping;
@property (retain, nonatomic) IESLiveCountTimer *notificationStartTimer;
@property (retain, nonatomic) IESLiveGCDTimer *perfTempTimer;
@property (nonatomic) long long currentThermalState;
@property (retain, nonatomic) NSMutableArray *restartSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWillEnterForeground:(id)a0;
- (void)willStopAnchorLive;
- (void)closeRoom;
- (void)updateTrackContext:(id)a0;
- (void)registerNotificationIfNeed;
- (void)stopPerfTempTimer;
- (BOOL)shouldShowPushView;
- (void)onAnchorThermalStateDidChanged;
- (void)onAnchorMemoryWarning;
- (void)startPerfTempTimer;
- (void)recordPushViewHasShowed;
- (BOOL)screenshotRestartEnable;
- (void)listenExtensionExitMessage;
- (void)listenPushStreamStatus;
- (void)showAnchorPerfPushViewWithRestartSource:(long long)a0;
- (void)backgroundHandleRestartSource:(long long)a0;
- (void)trackPushMessageWith:(long long)a0;
- (void)trackPushViewWithAction:(BOOL)a0 restartSource:(long long)a1;
- (void)didReceiveRestartSource:(long long)a0;
- (void)alertExtensionDisconnect;
- (void).cxx_destruct;
- (void)unregisterNotification;
- (id)initWithRoom:(id)a0;
- (void)startListen;

@end
