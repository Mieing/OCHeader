@class NSMutableArray;

@interface TIMXPBNBatchGetConversationParticipantsReadIndexResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationParticipantsReadIndexArray;
@property (readonly, nonatomic) unsigned long long conversationParticipantsReadIndexArray_Count;

+ (id)descriptor;

- (id)conversationParticipantsReadIndexArray;

@end
