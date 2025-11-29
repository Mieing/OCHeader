@class EmotionDetail, NSMutableArray, BaseResponse;

@interface GetEmotionDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EmotionDetail *emotionDetail;
@property (retain, nonatomic) NSMutableArray *emojiInfo;

+ (void)initialize;

@end
