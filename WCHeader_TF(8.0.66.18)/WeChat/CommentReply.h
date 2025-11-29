@class NSString;

@interface CommentReply : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *openid;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int replyId;
@property (nonatomic) unsigned int isDeleted;
@property (nonatomic) unsigned int replyLikeNum;
@property (nonatomic) unsigned int replyLikeStatus;
@property (nonatomic) unsigned int replyIsElected;
@property (nonatomic) unsigned int replyDelFlag;

+ (void)initialize;

@end
