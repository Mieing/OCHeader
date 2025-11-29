@class NSArray, NSString, IESECLiveAnchorBindedCouponsExtraModel;

@interface IESECLiveAnchorBindedCouponsModel : IESECLiveApiBaseModel

@property (copy, nonatomic) NSArray *coupons;
@property (copy, nonatomic) NSString *couponInstructionURL;
@property (retain, nonatomic) IESECLiveAnchorBindedCouponsExtraModel *extra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long page;
@property (copy, nonatomic) NSString *currentCouponID;
@property (copy, nonatomic) NSArray *currentCouponIds;
@property (nonatomic) BOOL allowSetCoupons;

+ (id)extraJSONTransformer;
+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
