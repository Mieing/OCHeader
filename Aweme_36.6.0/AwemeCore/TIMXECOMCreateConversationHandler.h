@class NSString, TIMXSDKInstance;

@interface TIMXECOMCreateConversationHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createConversationWithOtherParticipants:(id)a0 participantsBizRoleObjects:(id)a1 type:(int)a2 name:(id)a3 inInbox:(int)a4 idempotentID:(id)a5 bizExtension:(id)a6 completion:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
