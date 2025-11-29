@class GPBInt64Array;

@interface TIMXPBNGetFriendOnlineStatusRequestBody : GPBMessage

@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (retain, nonatomic) GPBInt64Array *friendUserIdsArray;
@property (readonly, nonatomic) unsigned long long friendUserIdsArray_Count;

+ (id)descriptor;

@end
