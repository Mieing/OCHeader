@class NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface SnsCommentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) int commentId;
@property (nonatomic) int replyCommentId;
@property (retain, nonatomic) NSString *replyUsername;
@property (nonatomic) unsigned int isNotRichText;
@property (nonatomic) unsigned long long replyCommentId2;
@property (nonatomic) unsigned long long commentId2;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int commentFlag;
@property (retain, nonatomic) NSMutableArray *snsEmojiInfo;
@property (nonatomic) unsigned int snsEmojiInfoCount;
@property (retain, nonatomic) SKBuiltinBuffer_t *adExtInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *snsDragon2024ElementBuf;
@property (nonatomic) int snsCommentContentType;
@property (nonatomic) unsigned int snsCommentImageInfoCount;
@property (retain, nonatomic) NSMutableArray *snsCommentImageInfo;

+ (void)initialize;

- (void)setSnsCommentImageInfo:(id)a0;
- (id)snsCommentImageInfo;
- (void)setSnsCommentImageInfoCount:(unsigned int)a0;
- (unsigned int)snsCommentImageInfoCount;
- (void)setSnsCommentContentType:(int)a0;
- (int)snsCommentContentType;
- (void)setSnsDragon2024ElementBuf:(id)a0;
- (id)snsDragon2024ElementBuf;
- (void)setAdExtInfo:(id)a0;
- (id)adExtInfo;
- (void)setSnsEmojiInfoCount:(unsigned int)a0;
- (unsigned int)snsEmojiInfoCount;
- (void)setSnsEmojiInfo:(id)a0;
- (id)snsEmojiInfo;
- (void)setCommentFlag:(unsigned int)a0;
- (unsigned int)commentFlag;
- (void)setDeleteFlag:(unsigned int)a0;
- (unsigned int)deleteFlag;
- (void)setCommentId2:(unsigned long long)a0;
- (unsigned long long)commentId2;
- (void)setReplyCommentId2:(unsigned long long)a0;
- (unsigned long long)replyCommentId2;
- (void)setIsNotRichText:(unsigned int)a0;
- (unsigned int)isNotRichText;
- (void)setReplyUsername:(id)a0;
- (id)replyUsername;
- (void)setReplyCommentId:(int)a0;
- (int)replyCommentId;
- (void)setCommentId:(int)a0;
- (int)commentId;
- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setContent:(id)a0;
- (id)content;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setUsername:(id)a0;
- (id)username;

@end
