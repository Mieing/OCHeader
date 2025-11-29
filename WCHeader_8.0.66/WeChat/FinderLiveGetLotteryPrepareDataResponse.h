@class FinderJumpInfo_LiteApp, PrizeData, NSMutableArray, BaseResponse;

@interface FinderLiveGetLotteryPrepareDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *productLiteapp;
@property (retain, nonatomic) NSMutableArray *lotteryAttendTypeList;
@property (retain, nonatomic) PrizeData *prizeData;
@property (retain, nonatomic) NSMutableArray *winnerCntLimitInfos;

+ (void)initialize;

@end
