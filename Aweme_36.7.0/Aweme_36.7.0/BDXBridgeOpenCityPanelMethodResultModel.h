@class NSString, NSNumber;

@interface BDXBridgeOpenCityPanelMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *select_name;
@property (copy, nonatomic) NSString *select_code;
@property (copy, nonatomic) NSString *select_l3_name;
@property (copy, nonatomic) NSString *select_l3_code;
@property (retain, nonatomic) NSNumber *select_l3_type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
