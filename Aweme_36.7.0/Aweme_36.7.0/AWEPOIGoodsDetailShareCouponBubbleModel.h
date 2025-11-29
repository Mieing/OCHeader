@class NSString, AWEPOIGoodsDetailShareCouponIconModel, NSDictionary;

@interface AWEPOIGoodsDetailShareCouponBubbleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponIconModel *bubbleIcon;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSDictionary *bubbleStatusTextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusTextWithPlayStatus:(long long)a0;
- (void).cxx_destruct;

@end
