@class FinderLiveLotteryPrizeMethod_LotteryGift, FinderLiveLotteryPrizeMethod_LotteryProduct, FinderLiveLotteryPrizeMethod_FreeGameTeamUp;

@interface FinderLiveLotteryPrizeMethod : WXPBGeneratedMessage

@property (nonatomic) unsigned int prizeType;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod_LotteryProduct *product;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod_LotteryGift *gift;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod_FreeGameTeamUp *freeGameTeamup;

+ (void)initialize;

@end
