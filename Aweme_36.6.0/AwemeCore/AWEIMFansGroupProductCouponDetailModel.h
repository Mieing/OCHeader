@class NSString;

@interface AWEIMFansGroupProductCouponDetailModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productImg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
