@class NSString, HTSLiveInteractiveAPI, IESLiveInteractMuteStateMachine;
@protocol IESLiveRoomService;

@interface IESLivePKGuestMuteStateManager : NSObject <IESLiveInteractMuteStateMachineDelegate>

@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) IESLiveInteractMuteStateMachine *machine;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long muteSelfState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)muteStateDidChange:(int)a0 reason:(id)a1;
- (void)onReceiveSelfSilenceStatus:(int)a0;
- (void)muteWithState:(unsigned long long)a0;
- (void)unMuteWithState:(unsigned long long)a0;
- (void)muteSelf:(unsigned long long)a0 force:(BOOL)a1;
- (void)unmuteSelf:(unsigned long long)a0;
- (void)muteSelfLocally;
- (void)muteSelfWithResume:(BOOL)a0 completion:(id /* block */)a1;
- (void)unMuteSelfWithEnforced:(BOOL)a0 completion:(id /* block */)a1;
- (void)muteStateMachineShowToast:(id)a0;
- (void)clearMuteState;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;
- (BOOL)isMute;

@end
