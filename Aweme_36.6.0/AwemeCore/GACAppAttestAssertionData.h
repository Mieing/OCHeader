@class NSData;

@interface GACAppAttestAssertionData : NSObject

@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) NSData *assertion;

- (id)initWithChallenge:(id)a0 artifact:(id)a1 assertion:(id)a2;
- (void).cxx_destruct;

@end
