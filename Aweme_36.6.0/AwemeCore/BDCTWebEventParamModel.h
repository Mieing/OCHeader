@class NSString, NSDictionary;

@interface BDCTWebEventParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
