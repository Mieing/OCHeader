@class NSString, NSMutableArray;

@interface AWEUserButtonStateMachineHelper : NSObject <AWEUserButtonStateMachineHelperProtocol>

@property (retain, nonatomic) NSMutableArray *transitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupDefaultFollowTransitions;
+ (id)setupDefaultFollowStates:(id)a0;
+ (id)sendMessageState:(id)a0;
+ (id)lightInteractionState:(id)a0;
+ (void)updateLightInteractionState:(id)a0 withAvatarView:(id)a1 containerView:(id)a2;
+ (id)transitionToLiteInteraction;
+ (id)transitionToSendMsg;
+ (id)setupDefaultLightInteractionState:(id)a0;
+ (void)updateLightInteractionState:(id)a0 withUserIDForDisplay:(id)a1;
+ (BOOL)conditionForSendMsgState:(id)a0 fromState:(id)a1 eventID:(id)a2;
+ (BOOL)conditionForLiteInteractionState:(id)a0 fromState:(id)a1 eventID:(id)a2;
+ (id)transitionToUnfollow;
+ (id)transitionToFollow;
+ (id)unfollowState:(id)a0;
+ (id)followedState:(id)a0;
+ (id)setupDefaultLightInteractionTransitions;

- (void).cxx_destruct;

@end
