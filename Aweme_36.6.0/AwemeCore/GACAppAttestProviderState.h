@class NSError, NSString, NSData;

@interface GACAppAttestProviderState : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *appAttestUnsupportedError;
@property (readonly, nonatomic) NSString *appAttestKeyID;
@property (readonly, nonatomic) NSData *attestationArtifact;

- (id)initUnsupportedWithError:(id)a0;
- (id)initWithSupportedInitialState;
- (id)initWithGeneratedKeyID:(id)a0;
- (id)initWithRegisteredKeyID:(id)a0 artifact:(id)a1;
- (void).cxx_destruct;

@end
