@class NSSet, NSString, NSNumber;

@interface AWEIMChatListServiceReadReceiptModel : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *finishedParticipantIDs;
@property (copy, nonatomic) NSSet *expectedParticipantIDs;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSNumber *conversationShortID;

- (id)initWithConversationID:(id)a0 messageID:(id)a1 conversationShortID:(id)a2 finishedParticipantIDs:(id)a3 expectedParticipantIDs:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
