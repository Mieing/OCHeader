@class NSMutableArray;

@interface TIMXPBNLoadDeletedConversationResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationsArray;
@property (readonly, nonatomic) unsigned long long conversationsArray_Count;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;

+ (id)descriptor;

@end
