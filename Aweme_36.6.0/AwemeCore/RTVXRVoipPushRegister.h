@class NSString, PKPushRegistry, NSDictionary, NSObject;
@protocol OS_dispatch_queue, RTVXRVoipPushRegisterDelegate;

@interface RTVXRVoipPushRegister : NSObject <PKPushRegistryDelegate>

@property (retain, nonatomic) PKPushRegistry *pushRegistry;
@property (copy, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSDictionary *stashPayload;
@property (weak, nonatomic) id<RTVXRVoipPushRegisterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerVoIPPush;
- (void)__registerPKPushResistry;
- (void)__didReceivePayLoad:(id)a0;
- (void).cxx_destruct;
- (void)pushRegistry:(id)a0 didReceiveIncomingPushWithPayload:(id)a1 forType:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)pushRegistry:(id)a0 didUpdatePushCredentials:(id)a1 forType:(id)a2;

@end
