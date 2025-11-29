@class RTVVoipParticipator, RTVVoipSession, NSString;
@protocol RTVUserProfileManagerInterface, RTVVoipStateRecorder, RTVXREngine, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVVoipServiceCallController : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVVoipServiceCallController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, nonatomic) id<RTVVoipStateRecorder> voipStateRecorder;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> voipResourceFetcher;
@property (retain, nonatomic) RTVVoipParticipator *servicePariticipator;
@property (nonatomic) long long callState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)imSchema;
- (id)logTag;
- (void)__addNotification;
- (void)__addObserver;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (id)dialPanelSchema;
- (void)__handlePlayKeyboardToneNotification:(id)a0;
- (void)__refreshServiceParticipator;
- (void)__updateEventType:(long long)a0;
- (void)__updateCallState:(long long)a0;
- (void).cxx_destruct;

@end
