@class NSString, MMListenCircleXUserInfo;

@interface MMListenCircleXCommentInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) MMListenCircleXUserInfo *commentUser;
@property (retain, nonatomic) MMListenCircleXUserInfo *replyUser;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
