@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXConversationApplyManager : NSObject <TIMXConversationApplyProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchLastApplyAndUnreadCountWithBizExt:(id)a0 completion:(id /* block */)a1;
- (void)clearConversationAuditWithConvShortID:(id)a0 completion:(id /* block */)a1;
- (id)addNotifyObserver:(id)a0;
- (void)removeNotifyObserverWithIdentifier:(id)a0;
- (void)fetchConversationAuditSwitchWithShortID:(long long)a0 type:(int)a1 completion:(id /* block */)a2;
- (void)updateConversationAuditSwitchWithShortID:(long long)a0 type:(int)a1 switchStatus:(BOOL)a2 ext:(id)a3 completion:(id /* block */)a4;
- (void)sendNewConversationApplyWithShortID:(long long)a0 conversationType:(int)a1 inviteUserID:(id)a2 applyReason:(id)a3 bizExt:(id)a4 completion:(id /* block */)a5;
- (void)checkConversationApplyWithApplyID:(long long)a0 applyStatus:(int)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)checkConversationMultiApplyWithApplyIDs:(id)a0 applyStatus:(int)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)fetchConversationApplyWithUserID:(long long)a0 shortID:(long long)a1 type:(int)a2 completion:(id /* block */)a3;
- (void)fetchConversationAppliesWithCursor:(long long)a0 limit:(int)a1 shortID:(id)a2 shouldClearUnread:(id)a3 completion:(id /* block */)a4;
- (void)fetchBatchApplyUnreadCountWith:(id)a0 bizExtension:(id)a1 completion:(id /* block */)a2;
- (void)fetchConversationsUnreadCount:(id)a0 completion:(id /* block */)a1;
- (void)fetchLastApplyAndUnreadCountWithCompletion:(id /* block */)a0;
- (void)clearConversationAuditUnreadCountWithConShortId:(long long)a0 completion:(id /* block */)a1;
- (void)processPushedApplyContentDic:(id)a0 type:(int)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
