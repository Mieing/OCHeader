@class RTVEffectGameContext, RTVEffectGameModel, NSString, RTVInteractionInitialAction, NSDictionary, NSNumber, RTVCompactStateMachine;
@protocol RTVUserProfileManagerInterface, RTVChatController, RTVXRInteractionController, RTVInteractionConfigureManagerInterface, RTVMultipleDelegateInterface, RTVEffectGameSessionObserver, RTVEffectGameManager;

@interface RTVEffectGameSession : RTVInteractionSession <RTVCompactStateMachineDelegate, RTVXRRoomSessionControllerObserver, RTVEffectGameSession>

@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrInteractionController;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVEffectGameSessionObserver> observers;
@property (readonly, nonatomic) RTVEffectGameModel *innerGameModel;
@property (readonly, nonatomic) RTVCompactStateMachine *compactStateMachine;
@property (readonly, nonatomic) id<RTVEffectGameManager> effectGameManager;
@property (readonly, nonatomic) NSNumber *gameRoomIdentifier;
@property (nonatomic) BOOL isFinishing;
@property (nonatomic) unsigned long long lastFinishReason;
@property (readonly, copy, nonatomic) NSString *hostIdentifier;
@property (readonly, copy, nonatomic) NSString *preparePageOwner;
@property (readonly, nonatomic) NSNumber *roleIdentifier;
@property (readonly, copy, nonatomic) NSString *gameUniqueID;
@property (nonatomic) BOOL gameStarted;
@property (nonatomic) BOOL gameEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RTVEffectGameModel *gameModel;
@property (readonly, nonatomic) RTVEffectGameContext *context;
@property (readonly, nonatomic) RTVInteractionInitialAction *initialAction;
@property (readonly, nonatomic) BOOL isFromInteractionTypeChange;
@property (readonly, copy, nonatomic) NSDictionary *trackDict;
@property (readonly, copy, nonatomic) NSString *textChatConversationID;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)useCastingPanelV2;
- (void)roomController:(id)a0 didUpdateTextChatInfo:(id)a1 withBusinessModel:(id)a2;
- (void)stateMachine:(id)a0 didFireEvent:(id)a1 result:(BOOL)a2 transition:(id)a3;
- (void)updateHostIdentifier:(id)a0;
- (void)finishEffectGameWithReason:(unsigned long long)a0;
- (void)updateRoleIdentifier:(id)a0;
- (void)renderGameResponseData:(id)a0;
- (void)updateGameUniqueID:(id)a0;
- (id)currentOwnerIdentifier;
- (void)__finishEffectGameWithReason:(unsigned long long)a0;
- (void)__renderChatControllerWithTextChatInfo:(id)a0;
- (BOOL)__gameModelChangedBetweenPreGameModel:(id)a0 newGameModel:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)updateContext:(id)a0;

@end
