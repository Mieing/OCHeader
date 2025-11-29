@class NSString;

@interface AWEIMFansGroupShopCouponDetailModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopImg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
