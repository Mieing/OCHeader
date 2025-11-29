@class NSString, MMListenCircleTopicItem, MMListenCircleHotCommentInfo, MMListenCircleUserInfo, NSMutableArray;

@interface MMListenCirclePostInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long createTime;
@property (retain, nonatomic) MMListenCircleUserInfo *authorInfo;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (nonatomic) int likeNum;
@property (nonatomic) int commentNum;
@property (retain, nonatomic) MMListenCircleHotCommentInfo *hotComment;
@property (retain, nonatomic) MMListenCircleTopicItem *topicItem;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSMutableArray *friendLikeList;
@property (retain, nonatomic) NSMutableArray *friendCommentList;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL isLike;
@property (nonatomic) int fingerLikeNum;
@property (nonatomic) int shareNum;
@property (nonatomic) BOOL isFingerLike;
@property (nonatomic) BOOL showFinderInteract;

+ (void)initialize;

@end
