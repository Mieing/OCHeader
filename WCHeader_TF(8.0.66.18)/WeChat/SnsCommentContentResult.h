@class NSMutableArray, SnsCommentContentRequest;

@interface SnsCommentContentResult : WXPBGeneratedMessage

@property (retain, nonatomic) SnsCommentContentRequest *req;
@property (nonatomic) int snsCommentContentType;
@property (nonatomic) unsigned int snsEmojiInfoCount;
@property (retain, nonatomic) NSMutableArray *snsEmojiInfo;
@property (nonatomic) unsigned int snsCommentImageInfoCount;
@property (retain, nonatomic) NSMutableArray *snsCommentImageInfo;

+ (void)initialize;

@end
