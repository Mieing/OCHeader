@class MMListenCircleUserInfo, NSString;

@interface MMListenCircleFriendCommentInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) MMListenCircleUserInfo *commentUser;
@property (retain, nonatomic) MMListenCircleUserInfo *replyUser;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL isMine;

+ (void)initialize;

@end
