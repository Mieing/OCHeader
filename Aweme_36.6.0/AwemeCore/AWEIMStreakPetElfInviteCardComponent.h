@class NSString, NSMutableDictionary;

@interface AWEIMStreakPetElfInviteCardComponent : AWEIMFlexComponent <AWEIMMessageListDataAction, AWEIMStreakDataCenterMessage, AWEIMMessageContentInterface>

@property (nonatomic) unsigned long long curSaveState;
@property (retain, nonatomic) NSMutableDictionary *acceptButtonClickCostTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)imStreakDataDidUpdateWithConversation:(id)a0;
- (void)logWithExecutePhase:(id)a0 eventName:(id)a1 extra:(id)a2;
- (void)didTapCardOtherArea;
- (void)checkAndUpdateCardCurrentStatusWithRequestSource:(id)a0;
- (void)p_updateProps:(id)a0;
- (id)flamePetElfInviteChatMessage;
- (void)p_updateCardIfNeed;
- (void)didTapAcceptInviteButton;
- (id)p_getTitleAttrStrWithContent:(id)a0;
- (id)p_getSubTitleAttrStrWithContent:(id)a0 subTitleNeedArrow:(BOOL)a1;
- (void)disableButtonClick:(BOOL)a0 source:(id)a1;
- (void)trackAcceptButtonClickCost;
- (void)operateInviteCardWithServerData:(id)a0 operation:(long long)a1;
- (void)p_trackClickMessageCardWithAction:(id)a0;
- (BOOL)p_isApprove;
- (void)logClickInviteCardWithAction:(id)a0;
- (id)inviteCardInvalidReason;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
