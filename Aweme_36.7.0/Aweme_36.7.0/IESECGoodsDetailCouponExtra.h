@class NSString, IESECGoodsDetailCouponUrgeInfo;

@interface IESECGoodsDetailCouponExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toastDesc;
@property (retain, nonatomic) IESECGoodsDetailCouponUrgeInfo *couponUrgeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponUrgeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
