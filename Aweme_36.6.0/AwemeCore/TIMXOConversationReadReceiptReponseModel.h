@class NSString, NSSet;

@interface TIMXOConversationReadReceiptReponseModel : NSObject <IESIMConversationReadReceiptReponseModelProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageCreateTime;
@property (nonatomic) int conversationType;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long expectedCount;
@property (retain, nonatomic) NSSet *finishedParticipantIDs;
@property (retain, nonatomic) NSSet *expectedParticipantIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
