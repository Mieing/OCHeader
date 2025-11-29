@class NSString;

@interface IESECLiveAutoApplyCouponRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *price;

- (id)buildParams;
- (void).cxx_destruct;

@end
