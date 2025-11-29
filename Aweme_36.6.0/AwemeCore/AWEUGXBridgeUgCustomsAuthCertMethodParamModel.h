@class NSNumber, NSString, NSDictionary;

@interface AWEUGXBridgeUgCustomsAuthCertMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *certOperator;
@property (copy, nonatomic) NSString *certID;
@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSDictionary *bizData;
@property (copy, nonatomic) NSDictionary *monitorParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
