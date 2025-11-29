@class EmotionDetail, NSMutableArray, BaseResponse;

@interface GetEmotionDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EmotionDetail *emotionDetail;
@property (retain, nonatomic) NSMutableArray *emojiInfo;

+ (void)initialize;

- (void)setEmojiInfo:(id)a0;
- (id)emojiInfo;
- (void)setEmotionDetail:(id)a0;
- (id)emotionDetail;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
