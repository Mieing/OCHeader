@class NSDictionary;

@interface BDXBridgeLocalLifeGetGoodsDetailMonitorInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *originSessionInfo;
@property (copy, nonatomic) NSDictionary *sessionChangeHistory;
@property (copy, nonatomic) NSDictionary *goodsDetailExtraInfo;
@property (copy, nonatomic) NSDictionary *originQueries;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
