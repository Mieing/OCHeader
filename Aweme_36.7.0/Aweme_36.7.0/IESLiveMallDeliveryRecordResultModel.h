@class NSDictionary;

@interface IESLiveMallDeliveryRecordResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *deliveryInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
