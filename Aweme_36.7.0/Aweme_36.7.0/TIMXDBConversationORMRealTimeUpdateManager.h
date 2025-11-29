@class NSString, NSArray, TIMXSDKInstance;
@protocol TIMXDBConversationRealTimeUpdateManagerDelegate;

@interface TIMXDBConversationORMRealTimeUpdateManager : NSObject <TIMXCurrentUserCredentialEventProtocol, TIMXStartUpTaskProtocol, TIMXDBConversationORMUpdateEventProtocol, TIMXDBConversationORMRealTimeUpdateManagerProtocol> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *currentUid;
@property (copy, nonatomic) NSArray *realTimeUpdatePluginsArray;
@property (copy, nonatomic) NSArray *downgradePluginsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TIMXDBConversationRealTimeUpdateManagerDelegate> delegate;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)realTimeUpdate_didUpdateLocalExtDict:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateConvSettingsInfo:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateConvParticipants:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateConvInfo:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateConvUnreadCount:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateUnreadNeglectMask:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateLastMsgCreateTime:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateBoxTypeMask:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateConvCoreInfo:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateLastHintMsg:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateLastMsg:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateBots:(id)a0 context:(id)a1;
- (void)realTimeUpdate_didUpdateBottomConversation:(id)a0 context:(id)a1;
- (void)didLoginWithUid:(id)a0;
- (BOOL)canCreatePlugin:(Class)a0 selector:(SEL)a1 context:(id)a2;
- (id)createPlugin:(Class)a0 context:(id)a1;
- (void)initRealTimeUpdatePlugins;
- (void)forwardConvUpdateEventWithUpdateReason:(long long)a0 conv:(id)a1 context:(id)a2;
- (id)p_sdkInnerORMRealTimeUpdatePlugins;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
