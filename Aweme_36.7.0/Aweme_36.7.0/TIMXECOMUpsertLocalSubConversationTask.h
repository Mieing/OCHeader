@class NSString, TIMXSDKInstance;

@interface TIMXECOMUpsertLocalSubConversationTask : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)storeWithObject:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
