@class NSMutableArray;

@interface TIMXPBNConsultGetConversationListResponseBody : GPBMessage

@property (nonatomic) long long nextVersion;
@property (nonatomic) BOOL hasNextVersion;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;

+ (id)descriptor;

- (BOOL)hasNextVersion;
- (int)inboxType;
- (id)messagesArray;
- (BOOL)hasMore;

@end
