@class NSDictionary;

@interface IESECShopProductAppointResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *successRes;
@property (copy, nonatomic) NSDictionary *failReason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
