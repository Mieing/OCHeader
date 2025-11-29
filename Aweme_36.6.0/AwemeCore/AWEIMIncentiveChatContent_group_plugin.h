@class AWEIMMessageConversation, NSString, NSDictionary, AWEIMIncentiveChatChatRelation, AWEIMIncentiveChatMessage;
@protocol IESIMUserService, AWEIMIncentiveChatService;

@interface AWEIMIncentiveChatContent_group_plugin : AWEIMFlexComponent <AWEIMIncentiveChatServiceMessage>

@property (readonly, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly, nonatomic) AWEIMIncentiveChatMessage *incentiveMessage;
@property (readonly, nonatomic) id<AWEIMIncentiveChatService> incentiveService;
@property (readonly, nonatomic) AWEIMIncentiveChatChatRelation *relation;
@property (readonly, nonatomic) unsigned long long computedStatus;
@property (readonly, nonatomic) id<IESIMUserService> userService;
@property (readonly, nonatomic) NSString *currentLoginUserID;
@property (readonly, copy, nonatomic) NSDictionary *cardTextConfig;
@property (nonatomic) BOOL isApproving;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)__createPresenter;
- (unsigned long long)__inviteStatusWithRelation:(id)a0;
- (unsigned long long)__approveStatusWithRelation:(id)a0;
- (BOOL)__whetherBtnTapDoNothing;
- (BOOL)__whetherBtnIsCheckRules;
- (void)__trackCardClick;
- (BOOL)__whetherSelfIsInRelation;
- (BOOL)__whetherBtnCanAccept;
- (void)__updateProps:(id)a0 withStatus:(unsigned long long)a1;
- (void)__updateBtnProps:(id)a0 withInteractionEnabled:(BOOL)a1 isPrimary:(BOOL)a2;
- (id)__configDictWithConfigKey:(id)a0;
- (BOOL)__whetherBtnIsAccept;
- (BOOL)__whetherBtnIsAcceptToo;
- (BOOL)__whetherSelfStillHasQuota;
- (BOOL)__whetherRelationIsOngoing;
- (BOOL)__whetherRelationStillHasQuota;
- (BOOL)__whetherSelfIsInvitorOfTheRelation;
- (BOOL)__whetherAnyoneElseHasJoinedRelation;
- (id)__userPerspective;
- (id)__cardTypeForTrack;
- (id)__inviteCardStatusForTrack;
- (id)__inviteCardExpireReasonForTrack;
- (id)__isRelationExitForTrack;
- (id)__clickLocationForTrack;
- (void)__trackCardShow;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)dealloc;
- (void)didTapButton;

@end
