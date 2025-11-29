@class FinderObjectMonotonicData_CommentCount, FinderObjectCountInfo, FinderObjectMonotonicData_CommentInfo;

@interface FinderFeedRealTimeInfoCountInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObjectCountInfo *countInfo;
@property (retain, nonatomic) FinderObjectMonotonicData_CommentCount *commentCount;
@property (retain, nonatomic) FinderObjectMonotonicData_CommentInfo *commentInfo;

+ (void)initialize;

@end
