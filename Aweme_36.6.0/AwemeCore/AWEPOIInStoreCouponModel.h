@class NSString;

@interface AWEPOIInStoreCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *priceTitle;
@property (copy, nonatomic) NSString *priceSubtitle;
@property (copy, nonatomic) NSString *benefitEntityId;
@property (nonatomic) long long couponId;
@property (nonatomic) long long couponType;
@property (copy, nonatomic) NSString *couponTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
