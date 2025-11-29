@class NSString, NSData;

@interface GACAppAttestStoredArtifact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyID;
@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) long long storageVersion;

- (id)initWithKeyID:(id)a0 artifact:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
