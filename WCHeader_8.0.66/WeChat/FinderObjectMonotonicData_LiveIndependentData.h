@class NSMutableArray, FinderObjectVersionData;

@interface FinderObjectMonotonicData_LiveIndependentData : WXPBGeneratedMessage

@property (nonatomic) unsigned int likeFlag;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int friendLikeCount;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (nonatomic) unsigned int forwardCount;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

@end
