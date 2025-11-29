@class NSString;

@interface AWEIMConIncentiveChatP2PMessageObserverComponent : AWEIMComponentBase <IESIMChatDataManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)componentDidMounted:(id)a0;
- (void)rerouteWithMessage:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)p_handleRelationReloadMessage:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)handleChatProgressData:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)handleChatActivationData:(id)a0 loginUID:(id)a1 serverPushTime:(double)a2;
- (void)handleActivityExitData:(id)a0;
- (void)dealloc;

@end
