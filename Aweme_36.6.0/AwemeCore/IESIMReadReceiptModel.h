@class NSSet, IESIMReadReceiptIdentifier;

@interface IESIMReadReceiptModel : NSObject <NSCoding>

@property (copy) NSSet *finishedParticipantIDs;
@property (copy) NSSet *expectedParticipantIDs;
@property (readonly, nonatomic) IESIMReadReceiptIdentifier *identifier;

- (id)initWithConversationID:(id)a0 messageID:(id)a1 conversationShortID:(id)a2 finishedParticipantIDs:(id)a3 expectedParticipantIDs:(id)a4;
- (BOOL)isAllRead;
- (id)liteDescription;
- (id)initWithIdentifier:(id)a0 finishedParticipantIDs:(id)a1 expectedParticipantIDs:(id)a2;
- (void)updateFinishedParticipantIDs:(id)a0 expectedParticipantIDs:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
