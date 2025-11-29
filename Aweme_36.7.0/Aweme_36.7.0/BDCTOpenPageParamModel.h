@class NSString;

@interface BDCTOpenPageParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
