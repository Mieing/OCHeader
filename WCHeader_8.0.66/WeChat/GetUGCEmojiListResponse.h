@class NSData, NSMutableArray, BaseResponse;

@interface GetUGCEmojiListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *emojiList;
@property (retain, nonatomic) NSData *pageContext;
@property (nonatomic) unsigned int totalCount;

+ (void)initialize;

@end
