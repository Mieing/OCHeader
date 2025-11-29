@class FBLPromise, NSString, NSObject;
@protocol GACAppAttestArtifactStorageProtocol, GACAppCheckBackoffWrapperProtocol, GACAppAttestAPIServiceProtocol, GACAppAttestService, GACAppAttestKeyIDStorageProtocol, OS_dispatch_queue;

@interface GACAppAttestProvider : NSObject <GACAppCheckProvider>

@property (readonly, nonatomic) id<GACAppAttestAPIServiceProtocol> APIService;
@property (readonly, nonatomic) id<GACAppAttestService> appAttestService;
@property (readonly, nonatomic) id<GACAppAttestKeyIDStorageProtocol> keyIDStorage;
@property (readonly, nonatomic) id<GACAppAttestArtifactStorageProtocol> artifactStorage;
@property (readonly, nonatomic) id<GACAppCheckBackoffWrapperProtocol> backoffWrapper;
@property (retain, nonatomic) FBLPromise *ongoingGetTokenOperation;
@property (nonatomic) BOOL ongoingGetTokenOperationLimitedUse;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageKeySuffixWithServiceName:(id)a0 resourceName:(id)a1;

- (id)initWithAppAttestService:(id)a0 APIService:(id)a1 keyIDStorage:(id)a2 artifactStorage:(id)a3 backoffWrapper:(id)a4;
- (void)getTokenWithLimitedUse:(BOOL)a0 completion:(id /* block */)a1;
- (id)getTokenWithLimitedUse:(BOOL)a0;
- (id)createGetTokenSequenceWithBackoffPromiseWithLimitedUse:(BOOL)a0;
- (id)createGetTokenSequencePromiseWithLimitedUse:(BOOL)a0;
- (id)attestationState;
- (id)initialHandshakeWithKeyID:(id)a0 limitedUse:(BOOL)a1;
- (id)refreshTokenWithKeyID:(id)a0 artifact:(id)a1 limitedUse:(BOOL)a2;
- (id)attestKeyGenerateIfNeededWithID:(id)a0 limitedUse:(BOOL)a1;
- (id)saveArtifactAndGetAppCheckTokenFromResponse:(id)a0 keyID:(id)a1;
- (id)generateAppAttestKeyIDIfNeeded:(id)a0;
- (id)attestKey:(id)a0 challenge:(id)a1;
- (id)resetAttestation;
- (id)generateAssertionWithKeyID:(id)a0 artifact:(id)a1 challenge:(id)a2;
- (id)isAppAttestSupported;
- (id)generateAppAttestKey;
- (void)getTokenWithCompletion:(id /* block */)a0;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)a0;
- (id)initWithServiceName:(id)a0 resourceName:(id)a1 baseURL:(id)a2 APIKey:(id)a3 keychainAccessGroup:(id)a4 requestHooks:(id)a5;
- (void).cxx_destruct;

@end
