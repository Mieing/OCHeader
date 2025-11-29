@class NSString, NSDictionary;

@interface AWELVideoPaymentInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long paymentType;
@property (nonatomic) BOOL paymentStatus;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL deviceOver;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *bottomText;
@property (copy, nonatomic) NSString *textExtra;
@property (copy, nonatomic) NSDictionary *textExtraDict;
@property (nonatomic) BOOL useCoupon;
@property (copy, nonatomic) NSString *couponMetaNo;
@property (copy, nonatomic) NSString *labelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)freeType;
- (void).cxx_destruct;
- (id)priceType;

@end
