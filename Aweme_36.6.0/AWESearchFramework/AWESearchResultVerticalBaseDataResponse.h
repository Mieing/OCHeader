@class NSString, NSDictionary;

@interface AWESearchResultVerticalBaseDataResponse : AWESearchResultCachalotDataResponse

@property (copy, nonatomic) NSString *couponSchame;
@property (copy, nonatomic) NSDictionary *couponGlobalProps;
@property (copy, nonatomic) NSDictionary *popUpCoupon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
