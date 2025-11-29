@class NSString, FinderExposeNotificationInfo;

@interface FinderMentionCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int mentionLikeCount;
@property (nonatomic) unsigned int mentionCommentCount;
@property (nonatomic) unsigned int mentionNotificationCount;
@property (nonatomic) unsigned int followCount;
@property (nonatomic) unsigned int fansCount;
@property (nonatomic) unsigned int fansAddCount;
@property (nonatomic) unsigned int normalCount;
@property (nonatomic) unsigned int systemCount;
@property (nonatomic) unsigned int newFollowCount;
@property (retain, nonatomic) NSString *latestNotificationBriefing;
@property (nonatomic) unsigned long long latestNotificationTime;
@property (nonatomic) unsigned long long updatetime;
@property (nonatomic) unsigned int firstLike;
@property (nonatomic) unsigned int firstComment;
@property (nonatomic) unsigned int lastLikePostTime;
@property (nonatomic) unsigned int lastCommentPostTime;
@property (nonatomic) unsigned int lastOperation;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderExposeNotificationInfo *exposeNotificationInfo;

+ (void)initialize;

@end
