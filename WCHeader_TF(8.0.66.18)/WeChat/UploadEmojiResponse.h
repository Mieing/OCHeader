@class NSMutableArray, BaseResponse;

@interface UploadEmojiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int emojiItemCount;
@property (retain, nonatomic) NSMutableArray *emojiItem;
@property (nonatomic) unsigned int actionFlag;

+ (void)initialize;

@end
