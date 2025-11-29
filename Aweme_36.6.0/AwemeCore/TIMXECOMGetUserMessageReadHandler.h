@class NSString, TIMXSDKInstance;

@interface TIMXECOMGetUserMessageReadHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)messageReadWithConversationID:(id)a0 messageIndex:(long long)a1 byUserID:(long long)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
