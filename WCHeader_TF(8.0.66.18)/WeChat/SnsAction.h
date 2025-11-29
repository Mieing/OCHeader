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

- (BOOL)isCommentDeletedByFeedOwner;

@end
