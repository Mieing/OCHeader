@class NSMutableArray, BaseResponse;

@interface BackupEmojiOperateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *needUploadMd5List;
@property (retain, nonatomic) NSMutableArray *emojiList;

+ (void)initialize;

@end
