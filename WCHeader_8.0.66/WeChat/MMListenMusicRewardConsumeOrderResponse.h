@class NSData, BaseResponse;

@interface MMListenMusicRewardConsumeOrderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int businessId;
@property (retain, nonatomic) NSData *wecoinBuff;

+ (void)initialize;

@end
