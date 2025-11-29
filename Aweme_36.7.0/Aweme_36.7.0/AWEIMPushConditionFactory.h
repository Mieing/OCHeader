@class AWEIMPushConditionConfig;

@interface AWEIMPushConditionFactory : NSObject

@property (retain, nonatomic) AWEIMPushConditionConfig *config;

+ (Class)aAWEIMModuleServiceInnerPushAdapterClass;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)conditionCheckGroupPushCoordinator;
- (id)conditionCheckEnterpriseRules;
- (id)conditionCheckGameInviteRules;
- (id)conditionCheckFormatRules;
- (id)conditionCheckRTVRules;
- (id)conditionCheckSliverWingRules;
- (id)conditionCheckLiveRoomRules;
- (id)conditionCheckCJYAPRules;
- (id)aAWEIMModuleServiceInnerPushAdapter;
- (id)p_currentSceneLimitWithType:(long long)a0;
- (id)p_currentTopVCLimitWithType:(long long)a0;
- (id)conditionCheckGlobalSwitchStatus;
- (id)conditionCheckCurrentTarget;
- (id)conditionCheckCurrentSceneForbidden;
- (id)conditionCheckCurrentScenePending;
- (id)conditionCheckOfflinePullStatus;
- (id)conditionCheckPushSwitchStatusByChat;
- (id)conditionCheckChatMuteStatus;
- (id)conditionCheckConversationDemoteStatus;
- (id)conditionCheckConversationReadStatus;
- (id)conditionCheckConversationTypes;
- (id)conditionCheckPushSwitchStatusByMessage;
- (id)conditionCheckMessageTypes;
- (id)conditionCheckMessageTypesInChat;
- (id)conditionCheckMessageRecallStatus;
- (id)conditionCheckMessageInvalidStatus;
- (id)conditionCheckMessageReadStatus;
- (id)conditionCheckMessageFrequencyStatus;
- (id)conditionCheckPropertySwitchStatus;
- (id)conditionCheckPropertyGuestState;
- (id)conditionCheckPropertyExpiredStatus;
- (id)conditionCheckPropertyFrequencyStatus;
- (id)conditionCheckB2CReachout;
- (id)conditionCheckTrash;
- (id)conditionCheckDisplayed;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
