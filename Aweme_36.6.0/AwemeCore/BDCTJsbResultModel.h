@class NSDictionary;

@interface BDCTJsbResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *byted_cert_data;
@property (copy, nonatomic) NSDictionary *raw_data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
