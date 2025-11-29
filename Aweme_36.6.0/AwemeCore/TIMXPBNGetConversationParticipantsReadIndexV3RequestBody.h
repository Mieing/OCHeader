@class NSString, GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNGetConversationParticipantsReadIndexV3RequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) GPBInt64Array *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
