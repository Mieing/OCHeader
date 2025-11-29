@class AWEIMChatModel, AWEIMIncentiveChatCellConfDetail, NSString;

@interface AWEIMForceInsertChat_IncentiveChat : AWEIMComponentBase <AWEIMForceInsertChatAction, AWEIMIncentiveChatServiceMessage, AWEIMForceInsertChatProtocol>

@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (retain, nonatomic) AWEIMIncentiveChatCellConfDetail *cellConfDetail;
@property (nonatomic) BOOL currentColdStartDidShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freqControlConfigWithNormal:(BOOL)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)completeIncentiveChatServiceUpdate:(id)a0;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)incentiveChatServiceActivityExit:(id)a0;
- (void)didClickForceInsertChatCell:(id)a0 chatCell:(id)a1 chatListVC:(id)a2;
- (void)didRemoveForceInsertChat:(id)a0;
- (void)didShowForceInsertChat:(id)a0;
- (id)makeInsertedIncentiveChat;
- (BOOL)p_hasEntryCell:(id)a0;
- (void)p_updateLastIncentiveChatModelDate:(double)a0;
- (double)p_getLastIncentiveChatModelDate;
- (id)p_getChatModelTimeStampKey;
- (id)forceInsertDecisionNode;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)dealloc;

@end
