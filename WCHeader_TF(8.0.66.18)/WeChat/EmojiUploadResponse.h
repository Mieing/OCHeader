@class NSMutableArray, BaseResponse;

@interface EmojiUploadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *emojiItem;

+ (void)initialize;

@end
