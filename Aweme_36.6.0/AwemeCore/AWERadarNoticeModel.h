@class NSString, AWEUserModel, AWERadarCouponModel;

@interface AWERadarNoticeModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *noticeID;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEUserModel *fromUser;
@property (nonatomic) long long couponStatus;
@property (retain, nonatomic) AWERadarCouponModel *coupon;

+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
