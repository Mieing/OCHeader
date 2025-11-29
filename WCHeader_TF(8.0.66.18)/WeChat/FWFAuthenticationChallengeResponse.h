@class NSNumber;

@interface FWFAuthenticationChallengeResponse : NSObject

@property (nonatomic) unsigned long long disposition;
@property (retain, nonatomic) NSNumber *credentialIdentifier;

+ (id)makeWithDisposition:(unsigned long long)a0 credentialIdentifier:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
