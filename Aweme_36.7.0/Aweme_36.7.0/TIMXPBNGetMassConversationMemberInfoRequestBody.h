@class GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNGetMassConversationMemberInfoRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) GPBInt64Array *userIdArray;
@property (readonly, nonatomic) unsigned long long userIdArray_Count;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
