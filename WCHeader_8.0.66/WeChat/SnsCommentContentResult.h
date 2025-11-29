@class NSMutableArray, SnsCommentContentRequest;

@interface SnsCommentContentResult : WXPBGeneratedMessage

@property (retain, nonatomic) SnsCommentContentRequest *req;
@property (nonatomic) int snsCommentContentType;
@property (nonatomic) unsigned int snsEmojiInfoCount;
@property (retain, nonatomic) NSMutableArray *snsEmojiInfo;
@property (nonatomic) unsigned int snsCommentImageInfoCount;
@property (retain, nonatomic) NSMutableArray *snsCommentImageInfo;

+ (void)initialize;

- (void)setSnsCommentImageInfo:(id)a0;
- (id)snsCommentImageInfo;
- (void)setSnsCommentImageInfoCount:(unsigned int)a0;
- (unsigned int)snsCommentImageInfoCount;
- (void)setSnsEmojiInfo:(id)a0;
- (id)snsEmojiInfo;
- (void)setSnsEmojiInfoCount:(unsigned int)a0;
- (unsigned int)snsEmojiInfoCount;
- (void)setSnsCommentContentType:(int)a0;
- (int)snsCommentContentType;
- (void)setReq:(id)a0;
- (id)req;

@end
