@class NSString, NSDictionary;

@interface BDCTOpenAndCloseParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
