@class NSArray, NSDictionary;

@interface BDXSCCSecureCheckingConfig : MTLModel

@property (copy, nonatomic) NSArray *ignoreCheckingList;
@property (copy, nonatomic) NSDictionary *allowAndDenyList;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
