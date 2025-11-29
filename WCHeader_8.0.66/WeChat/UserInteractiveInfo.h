@interface UserInteractiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int followTime;
@property (nonatomic) unsigned int seenCount;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int electedCommentCount;
@property (nonatomic) unsigned int rewardCount;
@property (nonatomic) unsigned int rewardTotal;
@property (nonatomic) unsigned int payreadCount;
@property (nonatomic) unsigned int payreadWecoinTotal;

+ (void)initialize;

@end
