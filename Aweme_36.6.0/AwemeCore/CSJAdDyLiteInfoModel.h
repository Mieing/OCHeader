@class CSJAdDyLiteCouponInfoModel, CSJAdDyLiteLiveRoomDataInfoModel, CSJAdDyLiteRenderConfigInfoModel;

@interface CSJAdDyLiteInfoModel : CSJBasicModel

@property (nonatomic) long long ad_slot_type;
@property (retain, nonatomic) CSJAdDyLiteCouponInfoModel *coupon;
@property (nonatomic) long long is_direct_lp;
@property (retain, nonatomic) CSJAdDyLiteLiveRoomDataInfoModel *live_room_data;
@property (nonatomic) long long page_cate;
@property (retain, nonatomic) CSJAdDyLiteRenderConfigInfoModel *render_config;

- (void).cxx_destruct;

@end
