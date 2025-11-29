@class EmotionReward, NSMutableArray, BaseResponse;

@interface GetEmotionRewardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *price;
@property (nonatomic) unsigned int donorNum;
@property (retain, nonatomic) NSMutableArray *donors;
@property (retain, nonatomic) EmotionReward *reward;

+ (void)initialize;

@end
