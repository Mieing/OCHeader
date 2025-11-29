@class NSString;

@interface BDXBridgeShowLunaDiversionPopupMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *click_area;
@property (nonatomic) long long active_pop_status;

+ (id)active_pop_statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
