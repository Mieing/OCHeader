@class FinderLiveLotteryMethodItem, BaseResponse;

@interface FinderLiveCheckLotteryBillResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int billStatus;
@property (nonatomic) unsigned int methodId;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *item;
@property (nonatomic) unsigned int nextInterval;

+ (void)initialize;

@end
