@class NSNumber, NSDictionary;

@interface BDXBridgeUpdateRawDataMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSDictionary *storage_data;
@property (retain, nonatomic) NSNumber *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
