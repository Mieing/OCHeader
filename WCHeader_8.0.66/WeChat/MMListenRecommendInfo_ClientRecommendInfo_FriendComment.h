@class NSString, MMListenUserInfo;

@interface MMListenRecommendInfo_ClientRecommendInfo_FriendComment : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) MMListenUserInfo *commentUser;
@property (nonatomic) BOOL isReply;
@property (retain, nonatomic) MMListenUserInfo *replyToUser;

+ (void)initialize;

@end
