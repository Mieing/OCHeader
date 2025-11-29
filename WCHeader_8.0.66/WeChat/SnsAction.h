@class NSString, RemindFriendsInfo, NSMutableArray, SKBuiltinBuffer_t;

@interface SnsAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *fromNickname;
@property (retain, nonatomic) NSString *toNickname;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) int replyCommentId;
@property (nonatomic) int commentId;
@property (nonatomic) unsigned int isNotRichText;
@property (nonatomic) unsigned long long replyCommentId2;
@property (nonatomic) unsigned long long commentId2;
@property (retain, nonatomic) SKBuiltinBuffer_t *hbbuffer;
@property (nonatomic) unsigned int commentFlag;
@property (retain, nonatomic) RemindFriendsInfo *remindFriendsInfo;
@property (retain, nonatomic) NSMutableArray *snsEmojiInfo;
@property (nonatomic) unsigned int snsEmojiInfoCount;
@property (retain, nonatomic) SKBuiltinBuffer_t *snsDragon2024ElementBuf;
@property (nonatomic) int springFestivalYear;
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
- (void)setSpringFestivalYear:(int)a0;
- (int)springFestivalYear;
- (void)setSnsDragon2024ElementBuf:(id)a0;
- (id)snsDragon2024ElementBuf;
- (void)setSnsEmojiInfoCount:(unsigned int)a0;
- (unsigned int)snsEmojiInfoCount;
- (void)setSnsEmojiInfo:(id)a0;
- (id)snsEmojiInfo;
- (void)setRemindFriendsInfo:(id)a0;
- (id)remindFriendsInfo;
- (void)setCommentFlag:(unsigned int)a0;
- (unsigned int)commentFlag;
- (void)setHbbuffer:(id)a0;
- (id)hbbuffer;
- (void)setCommentId2:(unsigned long long)a0;
- (unsigned long long)commentId2;
- (void)setReplyCommentId2:(unsigned long long)a0;
- (unsigned long long)replyCommentId2;
- (void)setIsNotRichText:(unsigned int)a0;
- (unsigned int)isNotRichText;
- (void)setCommentId:(int)a0;
- (int)commentId;
- (void)setReplyCommentId:(int)a0;
- (int)replyCommentId;
- (void)setContent:(id)a0;
- (id)content;
- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setToNickname:(id)a0;
- (id)toNickname;
- (void)setFromNickname:(id)a0;
- (id)fromNickname;
- (void)setToUsername:(id)a0;
- (id)toUsername;
- (void)setFromUsername:(id)a0;
- (id)fromUsername;
- (BOOL)isCommentDeletedByFeedOwner;

@end
