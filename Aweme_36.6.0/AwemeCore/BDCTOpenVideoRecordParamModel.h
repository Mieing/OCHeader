@class NSDictionary, NSString;

@interface BDCTOpenVideoRecordParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *view;
@property (copy, nonatomic) NSString *language;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
