@class FinderLiveErrorPage, FinderLiveLotteryInfo, BaseResponse;

@interface FinderLiveCreateLotteryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;

+ (void)initialize;

@end
