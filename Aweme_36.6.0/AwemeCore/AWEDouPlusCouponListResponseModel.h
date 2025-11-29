@class NSArray;

@interface AWEDouPlusCouponListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *couponList;
@property (nonatomic) BOOL hasMore;

+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
