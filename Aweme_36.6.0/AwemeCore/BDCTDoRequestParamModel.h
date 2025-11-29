@class NSString, NSDictionary;

@interface BDCTDoRequestParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
