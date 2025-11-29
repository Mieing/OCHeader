@class NSString, RTVVoipSession;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipManagerInterface;

@interface RTVVoipGroupSessionController : NSObject <RTVVoipSessionControllerInterface>

@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)supportInviteParticipator;
- (void)renderSession:(id)a0;
- (id)participator;
- (id)isPrejoinRoomEnable;
- (BOOL)enableInviteParticipator;
- (id)participatorID;
- (id)prepareCalleeVoipInfoFromServer;
- (void)handleRTCOfflineOfUid:(id)a0;
- (id)pollingRoomServiceModelWithReason:(long long)a0;
- (id)__userNamesWithUserIDs:(id)a0;
- (void).cxx_destruct;
- (id)voip;

@end
