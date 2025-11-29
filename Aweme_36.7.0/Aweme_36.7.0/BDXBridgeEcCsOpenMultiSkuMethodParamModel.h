@class NSString, NSDictionary;

@interface BDXBridgeEcCsOpenMultiSkuMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuUrl;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *channelParams;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *btmDid;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *cardContextInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
