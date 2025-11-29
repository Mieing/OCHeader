@class NSString, BDECIMClientConfig;
@protocol BDECIMCloudClientDelegate;

@interface BDECIMCloudIMClient : NSObject <TIMXOIMClientObserverDelegate, BDECIMCloudIMClientInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudClientDelegate> delegate;

- (void)imClientIdentityTokenDidBecomeInvalid;
- (void)imClientOnAuthError:(long long)a0;
- (void)renewIdentityToken:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
