@class NSDictionary, AWEPOIGoodsDetailShareCouponIconModel, NSString;

@interface AWEPOIGoodsDetailShareCouponTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponIconModel *backgroundIcon;
@property (copy, nonatomic) NSDictionary *statusTextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusTextWithPlayStatus:(long long)a0;
- (void).cxx_destruct;

@end
