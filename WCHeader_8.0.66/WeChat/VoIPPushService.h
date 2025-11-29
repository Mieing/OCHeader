@class NSData, NSString, PKPushRegistry;

@interface VoIPPushService : MMRootService <PKPushRegistryDelegate, MMServiceProtocol> {
    NSData *m_token;
    PKPushRegistry *m_tokenRetriver;
}

@property (readonly, nonatomic) NSData *voipToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)registerVoIP;
- (void)pushRegistry:(id)a0 didUpdatePushCredentials:(id)a1 forType:(id)a2;
- (void)pushRegistry:(id)a0 didReceiveIncomingPushWithPayload:(id)a1 forType:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)pushRegistry:(id)a0 didInvalidatePushTokenForType:(id)a1;
- (void).cxx_destruct;

@end
