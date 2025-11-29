@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeBulletStartRecordMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *frequency;
@property (copy, nonatomic) NSDictionary *category;
@property (nonatomic) BOOL once;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
