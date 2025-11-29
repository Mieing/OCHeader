@class NSString, FinderRedDotCtrlInfo;

@interface FinderWxMentionCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int mentionLikeCount;
@property (nonatomic) unsigned int mentionCommentCount;
@property (nonatomic) unsigned int mentionNotificationCount;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) FinderRedDotCtrlInfo *ctrlInfo;
@property (nonatomic) unsigned int friendObjectlikeLikeCount;
@property (nonatomic) unsigned int friendObjectrecommendLikeCount;
@property (nonatomic) unsigned int followAcceptedCount;
@property (nonatomic) unsigned int updateTime;

+ (void)initialize;

@end
