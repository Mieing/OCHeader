@class NSString, TIMXSDKInstance;

@interface TIMXECOMCreateSubConversationHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createSubConversationWithParentConvShortID:(long long)a0 parentConvID:(id)a1 inInbox:(int)a2 participantsObjects:(id)a3 bizExtension:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
