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

@end
