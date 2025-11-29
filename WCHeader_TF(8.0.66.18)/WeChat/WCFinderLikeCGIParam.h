@class NSString, NSDictionary, NSData, FinderInteractionMileStoneInfo, FinderLikeNewLifeReportInfo;

@interface WCFinderLikeCGIParam : NSObject

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *exportID;
@property (nonatomic) int reportScene;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long commentID;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long bypassBufferType;
@property (copy, nonatomic) NSData *bypassBuffer;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *likeUsername;
@property (nonatomic) BOOL isCommentLike;
@property (copy, nonatomic) NSDictionary *additionalClientUdfKv;
@property (nonatomic) int likeFlag;
@property (nonatomic) unsigned long long opType;
@property (nonatomic) int likeSourceType;
@property (nonatomic) BOOL isPrivateLike;
@property (retain, nonatomic) FinderLikeNewLifeReportInfo *newlifeReportInfo;
@property (nonatomic) unsigned long long comboLikeCount;
@property (retain, nonatomic) FinderInteractionMileStoneInfo *showMilestoneInfo;

- (void).cxx_destruct;

@end
