@class NSData, GACAppCheckToken;

@interface GACAppAttestAttestationResponse : NSObject

@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) GACAppCheckToken *token;

- (id)initWithResponseData:(id)a0 requestDate:(id)a1 error:(id *)a2;
- (id)initWithArtifact:(id)a0 token:(id)a1;
- (void).cxx_destruct;

@end
