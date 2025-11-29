@class TIMXPBNDeletedConversationBasicInfo, GPBInt64Array;

@interface TIMXPBNRestoreDeletedConversationResponseInfo : GPBMessage

@property (retain, nonatomic) TIMXPBNDeletedConversationBasicInfo *conversation;
@property (nonatomic) BOOL hasConversation;
@property (nonatomic) long long minIndex;
@property (nonatomic) BOOL hasMinIndex;
@property (retain, nonatomic) GPBInt64Array *messageIdsArray;
@property (readonly, nonatomic) unsigned long long messageIdsArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;

+ (id)descriptor;

@end
