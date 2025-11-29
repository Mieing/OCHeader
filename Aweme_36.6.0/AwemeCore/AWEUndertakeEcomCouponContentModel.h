@class NSString;

@interface AWEUndertakeEcomCouponContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) BOOL obtainThisTime;
@property (nonatomic) long long couponLeftTime;
@property (copy, nonatomic) NSString *couponId;
@property (copy, nonatomic) NSString *couponMetaId;
@property (nonatomic) long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
