@class NSString, MMListenMentionFeed, MMListenUserInfo, MMListenItem, MMListenJumpInfo;

@interface MMListenMentionMessage : WXPBGeneratedMessage

@property (nonatomic) unsigned int mentionType;
@property (retain, nonatomic) MMListenUserInfo *fromUser;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *refContent;
@property (retain, nonatomic) MMListenItem *item;
@property (nonatomic) unsigned long long mentionTime;
@property (nonatomic) unsigned long long mentionId;
@property (retain, nonatomic) NSString *refCommentId;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) MMListenMentionFeed *mentionFeed;
@property (retain, nonatomic) NSString *mentionTimeStr;
@property (retain, nonatomic) NSString *subWording;
@property (nonatomic) BOOL byAuthor;
@property (nonatomic) BOOL byFollowed;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;
@property (nonatomic) BOOL hasThanked;
@property (nonatomic) BOOL hasCommentLiked;
@property (retain, nonatomic) NSString *rootCommentId;

+ (void)initialize;

@end
