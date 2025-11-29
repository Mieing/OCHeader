@class NSNumber, NSArray, NSDictionary;

@interface IESECLiveAnchorGrantCouponResponseModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSNumber *countdown;
@property (copy, nonatomic) NSArray *currentCouponIds;
@property (nonatomic) BOOL allowSetCoupons;
@property (copy, nonatomic) NSDictionary *imContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
