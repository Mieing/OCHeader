@class NSString, TIMXSDKInstance;

@interface TIMXConversationGroupManagementManager : NSObject <TIMXOConversationGroupManagementOperationRequestProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchConversationGroupManagementInfoWithConversationID:(id)a0 completion:(id /* block */)a1;
- (void)fetchConversationGroupManagementInfoWithConversationID:(id)a0 types:(id)a1 completion:(id /* block */)a2;
- (void)setConversationGroupManagementInfoWithConversationID:(id)a0 updateType:(int)a1 updateValue:(int)a2 greetingMessages:(id)a3 completion:(id /* block */)a4;
- (void)setConversationGroupManagementInfoWithConversationID:(id)a0 updateType:(int)a1 groupFeatureId:(int)a2 groupFeatureValue:(id)a3 completion:(id /* block */)a4;
- (id)checkIsExistConversationWithCid:(id)a0 completion:(id /* block */)a1;
- (void)updateGroupManagementInfo:(id)a0 conversationId:(id)a1 inboxType:(int)a2 completion:(id /* block */)a3;
- (void)updateSetGroupManagementInfoWithConversationID:(id)a0 updateType:(int)a1 updateValue:(int)a2 greetingMessages:(id)a3 completion:(id /* block */)a4;
- (void)configGroupManagementInfo:(id)a0 fromPb:(id)a1;
- (void)invokeGroupManagementCompletionBlock:(id /* block */)a0 domain:(id)a1 code:(long long)a2 userInfo:(id)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
