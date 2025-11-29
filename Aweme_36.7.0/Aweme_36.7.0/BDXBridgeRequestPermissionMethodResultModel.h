@class NSNumber;

@interface BDXBridgeRequestPermissionMethodResultModel : BDXBridgeModel

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSNumber *alertResult;

+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
