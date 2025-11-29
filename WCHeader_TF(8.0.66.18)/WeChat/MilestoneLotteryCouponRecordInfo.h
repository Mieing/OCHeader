@class MilestoneLotteryCouponRecordInfo_AnchorInfo, MilestoneLotteryCouponRecordInfo_AttendInfo, MilestoneLotteryCouponRecordInfo_PrizeInfo, MilestoneLotteryCouponRecordInfo_UserInfo;

@interface MilestoneLotteryCouponRecordInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_UserInfo *userInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_PrizeInfo *prizeInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AnchorInfo *anchorInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AttendInfo *attendInfo;

+ (void)initialize;

@end
