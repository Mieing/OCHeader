@class NSString, NSDictionary, NSArray, AWEPOIGoodsDetailPlayInfoModel, AWEPOIGoodsDetailPlayCouponInfoModel;

@interface AWEPOIGoodsDetailSharePlayInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playShareId;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayInfoModel *playInfo;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel *masterCoupon;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel *guestCoupon;
@property (retain, nonatomic) NSDictionary *fromUser;
@property (retain, nonatomic) NSArray *toUser;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
