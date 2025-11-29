@class NSString;
@protocol GACAppCheckAPIServiceProtocol;

@interface GACAppAttestAPIService : NSObject <GACAppAttestAPIServiceProtocol>

@property (readonly, nonatomic) id<GACAppCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLWithBaseURL:(id)a0 resourceName:(id)a1;

- (id)HTTPBodyWithArtifact:(id)a0 challenge:(id)a1 assertion:(id)a2 limitedUse:(BOOL)a3;
- (id)randomChallengeWithAPIResponse:(id)a0;
- (id)randomChallengeFromResponseBody:(id)a0 error:(id *)a1;
- (id)HTTPBodyWithAttestation:(id)a0 keyID:(id)a1 challenge:(id)a2 limitedUse:(BOOL)a3;
- (id)base64StringWithData:(id)a0;
- (id)HTTPBodyWithJSONObject:(id)a0;
- (id)getRandomChallenge;
- (id)attestKeyWithAttestation:(id)a0 keyID:(id)a1 challenge:(id)a2 limitedUse:(BOOL)a3;
- (id)getAppCheckTokenWithArtifact:(id)a0 challenge:(id)a1 assertion:(id)a2 limitedUse:(BOOL)a3;
- (id)initWithAPIService:(id)a0 resourceName:(id)a1;
- (void).cxx_destruct;
- (id)URLForEndpoint:(id)a0;
- (id)backgroundQueue;

@end
