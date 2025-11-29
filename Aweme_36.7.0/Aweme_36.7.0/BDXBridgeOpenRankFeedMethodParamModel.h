@class NSString, NSNumber;

@interface BDXBridgeOpenRankFeedMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *rank_code;
@property (copy, nonatomic) NSString *previous_page;
@property (copy, nonatomic) NSString *search_params;
@property (copy, nonatomic) NSString *city_code;
@property (copy, nonatomic) NSString *district_code;
@property (retain, nonatomic) NSNumber *can_switch;
@property (retain, nonatomic) id extra_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
