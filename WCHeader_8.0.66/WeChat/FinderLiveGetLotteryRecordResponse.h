@class NSData, FinderLiveLotteryWinnerInfo, NSString, FinderLiveLotteryInfo, MilestoneLotteryInfo, BaseResponse, MilestoneLotteryRedpacketInfo, MilestoneLotteryCouponRecordInfo;

@interface FinderLiveGetLotteryRecordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLiveLotteryWinnerInfo *winnerInfo;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int personalmsgCloseSwitch;
@property (retain, nonatomic) NSString *recordUrl;
@property (nonatomic) unsigned int isUrlExpired;
@property (retain, nonatomic) NSString *expiredWording;
@property (nonatomic) unsigned int lotteryType;
@property (retain, nonatomic) MilestoneLotteryCouponRecordInfo *couponRecordInfo;
@property (retain, nonatomic) MilestoneLotteryRedpacketInfo *redpacketRecordInfo;
@property (retain, nonatomic) MilestoneLotteryInfo *milestoneLotteryInfo;

+ (void)initialize;

@end
