@class GPBInt64Array;

@interface TIMXPBNGetMessageReadRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) GPBInt64Array *messageIdsArray;
@property (readonly, nonatomic) unsigned long long messageIdsArray_Count;

+ (id)descriptor;

@end
