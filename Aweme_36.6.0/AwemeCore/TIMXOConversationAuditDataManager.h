@class NSString, TIMXSDKInstance;

@interface TIMXOConversationAuditDataManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAuditSwitchStatusWithShortID:(long long)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateAuditSwitchStatusWithShortID:(long long)a0 type:(unsigned long long)a1 switchStatus:(BOOL)a2 ext:(id)a3 completion:(id /* block */)a4;
- (void)ackConversationApplyWithApplyID:(long long)a0 agree:(BOOL)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)ackConversationMultiApplyWithApplyIDs:(id)a0 agree:(BOOL)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)sendConversationApplyWithShortID:(long long)a0 type:(unsigned long long)a1 inviteUserID:(long long)a2 bizExt:(id)a3 completion:(id /* block */)a4;
- (void)sendConversationApplyWithShortID:(long long)a0 type:(unsigned long long)a1 inviteUserID:(long long)a2 applyReason:(id)a3 bizExt:(id)a4 completion:(id /* block */)a5;
- (void)sendConversationApplyWithShortID:(long long)a0 type:(unsigned long long)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)fetchConversationsAuditUnreadCountsWithShortIDs:(id)a0 completion:(id /* block */)a1;
- (void)markConversationReadAllAuditWithShortID:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
