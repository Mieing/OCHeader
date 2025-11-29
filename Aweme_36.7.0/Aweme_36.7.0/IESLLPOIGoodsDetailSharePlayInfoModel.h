@class NSString, NSDictionary, IESLLPOIGoodsDetailPlayInfoModel, NSArray, IESLLPOIGoodsDetailPlayCouponInfoModel;

@interface IESLLPOIGoodsDetailSharePlayInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playShareId;
@property (retain, nonatomic) IESLLPOIGoodsDetailPlayInfoModel *playInfo;
@property (retain, nonatomic) IESLLPOIGoodsDetailPlayCouponInfoModel *masterCoupon;
@property (retain, nonatomic) IESLLPOIGoodsDetailPlayCouponInfoModel *guestCoupon;
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
