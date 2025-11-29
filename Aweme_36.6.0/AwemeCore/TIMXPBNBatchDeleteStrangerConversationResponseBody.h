@class GPBInt64Array;

@interface TIMXPBNBatchDeleteStrangerConversationResponseBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *failedConversationShortIdsArray;
@property (readonly, nonatomic) unsigned long long failedConversationShortIdsArray_Count;

+ (id)descriptor;

@end
