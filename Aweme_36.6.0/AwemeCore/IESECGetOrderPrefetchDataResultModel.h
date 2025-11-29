@class NSNumber, NSDictionary;

@interface IESECGetOrderPrefetchDataResultModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSDictionary *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
