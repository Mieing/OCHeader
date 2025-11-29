@class NSString, BDXBridgeEcGetCurrentGCJLocationData;

@interface BDXBridgeEcGetCurrentGCJLocationMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *permission;
@property (retain, nonatomic) BDXBridgeEcGetCurrentGCJLocationData *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
