@class FinderLiveMilestoneLotteryInfo_ClaimInfo, MilestoneLotteryCouponRecordInfo_AnchorInfo, MilestoneLotteryCouponRecordInfo_AttendInfo, MilestoneLotteryInfo_PrizeInfo, MilestoneLotteryCouponRecordInfo_UserInfo, NSString;

@interface MilestoneLotteryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_UserInfo *userInfo;
@property (retain, nonatomic) MilestoneLotteryInfo_PrizeInfo *prizeInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AnchorInfo *anchorInfo;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo_AttendInfo *attendInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ClaimInfo *claimInfo;
@property (retain, nonatomic) NSString *id;

+ (void)initialize;

@end
