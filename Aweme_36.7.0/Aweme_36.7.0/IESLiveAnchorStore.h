@class HTSGroupedLiveMessageHandler, NSString, IESLiveUIAspectUtil, NSError, NSDate, IESLiveAnchorWatchTime, NSAttributedString, HTSEventContext;
@protocol IESLiveRoomService, IESLiveMonitor;

@interface IESLiveAnchorStore : NSObject <HTSLiveAnchorActions, HTSLiveMessageSubscriber, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (retain, nonatomic) NSDate *liveStartDate;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSString *lastPrompts;
@property (retain, nonatomic) NSString *fobbidenURL;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *violationReason;
@property (retain, nonatomic) NSAttributedString *displayText;
@property (nonatomic) long long state;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL needHideAllComponent;
@property (nonatomic) BOOL isPausedManully;
@property (nonatomic) BOOL closeRoomByAccountExited;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) IESLiveAnchorWatchTime *watchTime;
@property (retain, nonatomic) IESLiveUIAspectUtil *uiAspectUtil;
@property (nonatomic) BOOL pauseOnBackground;
@property (nonatomic) BOOL pauseOnEnterNewPage;
@property (nonatomic) BOOL cancleAutoPause;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *logLiveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)stopAnchorLive;
- (void)enablePauseOnBackground:(BOOL)a0 caller:(id)a1;
- (void)enablePauseOnEnterNewPage:(BOOL)a0 caller:(id)a1;
- (void)enableCancelAutoPause:(BOOL)a0 caller:(id)a1;
- (BOOL)shouldCancelAutoPause;
- (void)updateLiveRoom;
- (id)loadControlMessageHandler;
- (void)logSceneEvent:(id)a0 status:(unsigned long long)a1;
- (void)__stopLive;
- (void)registerActionHandler;
- (void)__closeRoomByPlatformWithForbiddenUrl:(id)a0 title:(id)a1 violationReason:(id)a2 displayText:(id)a3;
- (void)__closeRoomByAccountExited;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
