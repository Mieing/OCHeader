@class NSString, NSNumber;

@interface BDXBridgeAdRequestRewardCouponReqParams : BDXBridgeModel

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *reqid;
@property (copy, nonatomic) NSString *biz_tag;
@property (copy, nonatomic) NSString *product_id;
@property (copy, nonatomic) NSString *room_id;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *ad_id;
@property (retain, nonatomic) NSNumber *coupon_type;
@property (copy, nonatomic) NSString *full_path;
@property (copy, nonatomic) NSString *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
