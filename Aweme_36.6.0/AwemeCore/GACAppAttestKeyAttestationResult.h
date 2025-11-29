@class NSString, NSData;

@interface GACAppAttestKeyAttestationResult : NSObject

@property (readonly, nonatomic) NSString *keyID;
@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSData *attestation;

- (id)initWithKeyID:(id)a0 challenge:(id)a1 attestation:(id)a2;
- (void).cxx_destruct;

@end
