@class NSString;

@interface IESIMEcomConversationBoxService : HTSService <IESIMEcomConversationBoxService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableEcomBoxOpt;
- (BOOL)enableEcomBoxRedDotOpt;
- (void)syncConversations:(id)a0 completion:(id /* block */)a1;
- (void)ecomLifeCycleChange:(long long)a0 lastUnreadTime:(double)a1;
- (void)batchUpdateConversations:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversationWithLastIndexDict:(id)a0 completion:(id /* block */)a1;
- (void)markReadAllConversationsWithCompletion:(id /* block */)a0;
- (void)syncLocalStickOnTopState:(BOOL)a0;
- (void)trackTotalUnreadCount:(long long)a0 scene:(id)a1 steadyState:(BOOL)a2;
- (BOOL)p_EnableEcomBoxOpt;

@end
