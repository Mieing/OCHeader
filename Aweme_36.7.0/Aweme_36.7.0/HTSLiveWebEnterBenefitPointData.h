@interface HTSLiveWebEnterBenefitPointData : IESLivePBBaseMessage

@property (nonatomic) BOOL hasOngoingLottery;
@property (nonatomic) BOOL hasOngoingLuckyMoney;

+ (id)descriptor;

@end
