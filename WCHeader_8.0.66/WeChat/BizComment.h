@class NSString, CommentReplyList;

@interface BizComment : WXPBGeneratedMessage

@property (nonatomic) unsigned int userCommentId;
@property (nonatomic) unsigned int personalCommentId;
@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int isElected;
@property (nonatomic) unsigned int likeNum;
@property (nonatomic) unsigned int likeStatus;
@property (retain, nonatomic) CommentReplyList *reply;
@property (nonatomic) unsigned int isFromFriend;
@property (nonatomic) unsigned int isFromMe;
@property (nonatomic) unsigned int isTop;
@property (nonatomic) unsigned int likeId;

+ (void)initialize;

@end
