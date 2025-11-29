@class NSString, NSNumber;

@interface BDXBridgeGetCurrentGCJLocationMethodResultModel : BDXBridgeModel <BDXBridgeGetCurrentGCJLocationMethodResultModelProtocol>

@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *city_code;
@property (copy, nonatomic) NSString *city_name;
@property (retain, nonatomic) NSNumber *is_pop_select;
@property (copy, nonatomic) NSString *real_city_name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *city_code;
@property (copy, nonatomic) NSString *city_name;
@property (retain, nonatomic) NSNumber *is_pop_select;
@property (copy, nonatomic) NSString *real_city_name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
