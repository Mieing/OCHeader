@class NSMutableArray, TIMXPBNGetRecentMsgVersionRange;

@interface TIMXPBNGetRecentMessageRespBody : GPBMessage

@property (nonatomic) long long nextConversationVersion;
@property (nonatomic) BOOL hasNextConversationVersion;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) TIMXPBNGetRecentMsgVersionRange *range;
@property (nonatomic) BOOL hasRange;

+ (id)descriptor;

- (long long)nextConversationVersion;
- (BOOL)hasNextConversationVersion;
- (id)messagesArray;
- (BOOL)hasMore;
- (id)range;
- (BOOL)hasRange;

@end
