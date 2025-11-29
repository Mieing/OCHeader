@class AWEIMFansGroupProductCouponDetailModel, NSString, AWEIMFansGroupShopCouponDetailModel, AWEIMFansGroupCouponTrackModel, NSNumber;

@interface AWEIMFansGroupCouponModel : IESIMBaseApiModel

@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *couponMetaId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long couponStatus;
@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long expireTime;
@property (copy, nonatomic) NSString *showExpireTime;
@property (copy, nonatomic) NSString *couponName;
@property (retain, nonatomic) NSNumber *credit;
@property (retain, nonatomic) NSNumber *discount;
@property (retain, nonatomic) AWEIMFansGroupProductCouponDetailModel *productDetail;
@property (retain, nonatomic) AWEIMFansGroupShopCouponDetailModel *shopDetail;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *fromUid;
@property (retain, nonatomic) NSNumber *leftCount;
@property (retain, nonatomic) AWEIMFansGroupCouponTrackModel *trackModel;

+ (BOOL)couponTypeIsValid:(unsigned long long)a0;
+ (id)productDetailJSONTransformer;
+ (id)shopDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isShopCoupon;
- (BOOL)isProductCoupon;
- (BOOL)isDiscountCoupon;
- (BOOL)isCreditCoupon;
- (BOOL)couponStatusIsValid;
- (BOOL)couponTypeIsValid;
- (BOOL)isNoThresholdCoupon;
- (BOOL)isThresholdCoupon;
- (void).cxx_destruct;

@end
