@class NSString;

@interface BDXBridgeCreatePOIMediaVideoToken : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKeyID;
@property (copy, nonatomic) NSString *secretKeyID;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *spaceName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
