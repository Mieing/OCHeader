@class NSMutableArray;

@interface TIMXPBNMessagesInConversationResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) NSMutableArray *threadMessagesArray;
@property (readonly, nonatomic) unsigned long long threadMessagesArray_Count;

+ (id)descriptor;

@end
