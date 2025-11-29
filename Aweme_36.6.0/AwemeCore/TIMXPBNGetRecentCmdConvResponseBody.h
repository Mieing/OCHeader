@class NSMutableArray;

@interface TIMXPBNGetRecentCmdConvResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationInfoArray;
@property (readonly, nonatomic) unsigned long long conversationInfoArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextCmdMessageConvVersion;
@property (nonatomic) BOOL hasNextCmdMessageConvVersion;

+ (id)descriptor;

- (BOOL)hasMore;
- (long long)nextCmdMessageConvVersion;
- (id)conversationInfoArray;

@end
