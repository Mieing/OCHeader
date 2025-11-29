@class NSString;

@interface AWEIMRTVService : NSObject <AWEIMRTVServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)voipEntranceEnableShowWithConversation:(id)a0;
- (BOOL)voipEntranceIsEnableInConversation:(id)a0;
- (BOOL)isEnableInvokeVoipInConversation:(id)a0;
- (id)resultIsEnableInvokeVoipInConversation:(id)a0 rtvType:(long long)a1;
- (void)openFeedTogetherWithRoomID:(id)a0 withOwnerUserID:(id)a1 withEnterFrom:(id)a2 withEventPage:(id)a3 withConversation:(id)a4 withAwemeModel:(id)a5;
- (id)createRTVSelectPresenter;
- (void)invokeGameRTVInteractionWithConversation:(id)a0;
- (void)invokeFeedRTVInteractionWithConversation:(id)a0 serviceErrorCode:(long long)a1;
- (BOOL)enableIMChatCall;
- (BOOL)enableXRTCGameEntranceInIM;
- (id)describeWithBlockReason:(long long)a0;
- (id)p_voipEntranceIsEnableInConversation:(id)a0;
- (id)p_isEnableInvokeVoipInConversation:(id)a0 rtvType:(long long)a1;
- (void)p_openFeedTogetherLiveWithRoomID:(id)a0 withOwnerUserID:(id)a1 withEnterFrom:(id)a2 withEventPage:(id)a3 withConversation:(id)a4 withAwemeModel:(id)a5;
- (id)p_voipEntranceIsEnableWithUser:(id)a0;
- (id)p_entranceIsEnableInGroupConversation:(id)a0;
- (id)p_resultWithErrorDescription:(id)a0 code:(long long)a1;
- (id)p_isEnableInvokeVoipWithUser:(id)a0 rtvType:(long long)a1;
- (id)p_voipCapacityEnable;
- (BOOL)p_isGroupMemberMoreThanLimit:(id)a0;
- (BOOL)p_isGroupMemberLessThanLimit:(id)a0;
- (id)p_errorWithDescription:(id)a0 code:(long long)a1;
- (long long)p_minConversationMemberLimitForGroupVoipEntranceShow;
- (long long)p_maxConversationMemberLimitForGroupVoipEntranceShow;
- (BOOL)p_isAnchorLiveRatherThanAudience;

@end
