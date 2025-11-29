@class NSString;

@interface AWEIMIncentiveChatMessageUtility : NSObject <AWEIMIncentiveChatMessageUtilityInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)whetherMemberCount:(unsigned long long)a0 meetsSizeRequirementsWhenSelfIsOwner:(BOOL)a1;
+ (BOOL)whetherOnlyOwnerHasEntrance;
+ (BOOL)whetherGroupIncentiveMemberMeetsMinSizeRequirementWithCount:(unsigned long long)a0;
+ (void)trackMessageTabTopRedpacket:(BOOL)a0 totalParams:(id)a1;
+ (void)trackAcceptBannerWithRelation:(id)a0 extraParams:(id)a1;
+ (void)trackFullScreenAnimationWithType:(unsigned long long)a0;
+ (void)trackConTopPendantWithType:(unsigned long long)a0 extraParams:(id)a1;
+ (void)trackShowCardWithRelation:(id)a0 message:(id)a1;
+ (id)defaultGroupIncentiveMsgCardConfig;
+ (void)trackClickCardWithRelation:(id)a0 message:(id)a1 extraParams:(id)a2;
+ (id)groupIncentiveConfig;
+ (id)defaultGroupSizeConfig;
+ (void)p_openLynxPanelWithType:(unsigned long long)a0 extraParams:(id)a1;
+ (id)p_cardCommonParamsWithRelation:(id)a0 message:(id)a1;
+ (id)sharedInstance;

- (id)displayTextWithMessage:(id)a0 displayType:(long long)a1;
- (void)transferToLynxPanelType:(unsigned long long)a0 con:(id)a1 params:(id)a2;
- (unsigned long long)lynxPanelTypeWithSchemaKey:(id)a0;
- (BOOL)hasEstablishedRelationWithCid:(id)a0;
- (BOOL)isIncentiveGroupChatValidInFirstVersionWithCon:(id)a0 isAcb:(BOOL)a1;
- (BOOL)groupIsAvailableWithConversation:(id)a0;
- (BOOL)groupIsAvailableForMangoAcbNoticeShowWithConversation:(id)a0;
- (BOOL)isGroupSignOnWithConversation:(id)a0;
- (BOOL)isGroupSignOffWithConversation:(id)a0;
- (BOOL)whetherGroupMeetsSizeRequirements:(id)a0;
- (BOOL)whetherGroupMeetsOwnerRequirements:(id)a0;
- (BOOL)enableShowMessageCardWithAweType:(long long)a0;
- (BOOL)whetherMemberCount:(unsigned long long)a0 meetsSizeRequirementsWhenSelfIsOwner:(BOOL)a1;
- (BOOL)whetherOnlyOwnerHasEntrance;
- (BOOL)whetherGroupIncentiveMemberMeetsMinSizeRequirementWithCount:(unsigned long long)a0;
- (void)trackMessageTabTopRedpacket:(BOOL)a0 totalParams:(id)a1;
- (void)trackAcceptBannerWithRelation:(id)a0 extraParams:(id)a1;
- (void)trackFullScreenAnimationWithType:(unsigned long long)a0;
- (void)trackConTopPendantWithType:(unsigned long long)a0 extraParams:(id)a1;
- (void)trackShowCardWithRelation:(id)a0 message:(id)a1;
- (id)displayTextForBulletMessageWithMessage:(id)a0 displayType:(long long)a1;

@end
