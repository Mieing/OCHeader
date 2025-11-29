@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXOMessageSenderObserver : NSObject <TIMXStartUpTaskProtocol, TIMXNotifierDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (id)addWeakObserver:(id)a0;
- (void)removeObserverWithIdentifier:(id)a0;
- (void)userDidLogin:(id)a0;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveResponse:(id)a2 error:(id)a3;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveAsyncResponse:(id)a2 error:(id)a3;
- (void)onMessageSendRequestBlockedByInvalidIdentityToken:(id)a0 inConversation:(id)a1;
- (void)userDidLogout:(id)a0;
- (void)p_setUp;
- (void)userWillLogout:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
