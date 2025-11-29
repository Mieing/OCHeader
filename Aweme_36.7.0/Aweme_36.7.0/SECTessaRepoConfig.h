@class NSSet;

@interface SECTessaRepoConfig : NSObject

@property unsigned long long perfSample;
@property (copy) NSSet *validSchemePrefix;

+ (id)shared;

- (void).cxx_destruct;

@end
