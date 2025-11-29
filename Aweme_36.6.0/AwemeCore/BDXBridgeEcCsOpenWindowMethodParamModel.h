@class NSString, NSDictionary;

@interface BDXBridgeEcCsOpenWindowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *openType;
@property (copy, nonatomic) NSString *windowUrl;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *btmDid;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSDictionary *bcmParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
