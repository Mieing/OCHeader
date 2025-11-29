@class NSString, BDECPigeonClientConfigV2;
@protocol BDECIMCloudClientV2Delegate;

@interface BDECIMCloudIMClientV2 : NSObject <TIMXOIMClientObserverDelegate, BDECIMCloudIMClientV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudClientV2Delegate> delegate;

- (void)imClientIdentityTokenDidBecomeInvalid;
- (void)imClientOnAuthError:(long long)a0;
- (void)renewIdentityToken:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
