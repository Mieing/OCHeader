@class NSString, AWEPOIInStoreMerchantUserInfoModel, NSArray, AWEPOIInStoreButtonModel, AWEPOIInStoreCouponModel;

@interface AWEPOIInStoreCouponPageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) AWEPOIInStoreMerchantUserInfoModel *merchantUserInfo;
@property (copy, nonatomic) AWEPOIInStoreCouponModel *coupon;
@property (copy, nonatomic) NSArray *couponList;
@property (copy, nonatomic) AWEPOIInStoreButtonModel *accept;
@property (copy, nonatomic) AWEPOIInStoreButtonModel *decline;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *popViewSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
