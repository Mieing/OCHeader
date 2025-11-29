@class NSString, NSArray;

@interface AWECardCouponListResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasRedeemed;
@property (copy, nonatomic) NSString *redeemedURL;
@property (copy, nonatomic) NSArray *couponList;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;

+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
