@class NSString;

@interface StoryCommentDetail : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *fromNickName;
@property (retain, nonatomic) NSString *toNickName;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int fontColor;
@property (nonatomic) unsigned int commentFlag;
@property (nonatomic) int replyCommentId;
@property (nonatomic) int commentId;
@property (nonatomic) unsigned int isNotRichText;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int bubbleEnhance;
@property (nonatomic) unsigned int doubleClickBubble;

+ (void)initialize;

@end
