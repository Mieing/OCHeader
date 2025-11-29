@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetLiveRewardGainsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) float totalValue;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (nonatomic) unsigned long long rewardTotalAmountInWecoin;
@property (nonatomic) unsigned long long rewardTotalAmountInHeat;
@property (nonatomic) unsigned long long heatValue;
@property (nonatomic) unsigned long long liveHeatValue;

+ (void)initialize;

@end
