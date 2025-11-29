@class NSMutableArray;

@interface TIMXPBNGetCSBRecentMessageRespBody : GPBMessage

@property (nonatomic) long long nextCsbConversationVersion;
@property (nonatomic) BOOL hasNextCsbConversationVersion;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) int csbBizId;
@property (nonatomic) BOOL hasCsbBizId;

+ (id)descriptor;

- (BOOL)hasMore;
- (long long)nextCsbConversationVersion;
- (id)messagesArray;

@end
