@class BaseRequest, NSMutableArray;

@interface UploadEmojiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int emojiItemCount;
@property (retain, nonatomic) NSMutableArray *emojiItem;

+ (void)initialize;

@end
