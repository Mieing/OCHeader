@class NSMutableArray, BaseResponse;

@interface MMListenMusicGetRewardGiftResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *rewardGiftList;
@property (nonatomic) unsigned int wecoinBusinessId;

+ (void)initialize;

@end
