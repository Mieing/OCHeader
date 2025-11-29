@class EmotionLink, EmotionActivity, BaseResponse;

@interface GetEmotionActivityResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EmotionActivity *activity;
@property (retain, nonatomic) EmotionLink *link;

+ (void)initialize;

@end
