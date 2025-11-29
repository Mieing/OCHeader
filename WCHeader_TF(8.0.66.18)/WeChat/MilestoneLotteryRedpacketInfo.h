@class MilestoneLotteryCouponRecordInfo_AnchorInfo, MilestoneLotteryCouponRecordInfo_AttendInfo, MilestoneLotteryCouponRecordInfo_UserInfo, MilestoneLotteryRedpacketInfo_RedpacketPrizeInfo;

@interface MilestoneLotteryRedpacketInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_UserInfo *userInfo;
@property (retain, nonatomic) MilestoneLotteryRedpacketInfo_RedpacketPrizeInfo *prizeInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AnchorInfo *anchorInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AttendInfo *attendInfo;

+ (void)initialize;

@end
