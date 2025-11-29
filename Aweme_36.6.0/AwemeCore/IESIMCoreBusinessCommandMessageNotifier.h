@class NSString, TIMXSDKInstance, TIMXMulticastDelegate, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMCoreBusinessCommandMessageNotifier : NSObject <TIMXOChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, IESIMCoreBusinessCommandMessageNotifierProtocol> {
    long long p_observerCollectOnceToken;
}

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) NSString *observerToken;
@property (readonly, nonatomic) TIMXMulticastDelegate *mDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserverWithIdentity:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)didReceiveCommonBusinessCommandMessage:(id)a0;
- (id)p_mediator;
- (void).cxx_destruct;
- (id)addObserver:(id)a0;
- (id)init;
- (void)dealloc;

@end
