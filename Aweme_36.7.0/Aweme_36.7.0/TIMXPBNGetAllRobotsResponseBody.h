@class NSMutableArray;

@interface TIMXPBNGetAllRobotsResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *robotsArray;
@property (readonly, nonatomic) unsigned long long robotsArray_Count;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;

+ (id)descriptor;

@end
