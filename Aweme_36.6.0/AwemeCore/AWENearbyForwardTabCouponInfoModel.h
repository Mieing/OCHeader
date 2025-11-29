@class NSString;

@interface AWENearbyForwardTabCouponInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *transCouponData;
@property (nonatomic) long long barAmount;
@property (nonatomic) long long couponType;
@property (copy, nonatomic) NSString *couponId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
