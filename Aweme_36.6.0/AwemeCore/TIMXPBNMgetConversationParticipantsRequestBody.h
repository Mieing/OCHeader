@class NSString, GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNMgetConversationParticipantsRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) GPBInt64Array *participantsArray;
@property (readonly, nonatomic) unsigned long long participantsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
