@class NSString, NSNumber;

@interface BDXBridgeSetUserDomainStorageItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSNumber *expiredTime;
@property (nonatomic) BOOL enableAppIdIsolation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
