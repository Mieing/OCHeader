@class NSString, NSSet;

@interface AWEIMMessageReadReceiptModel : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSSet *finishedParticipantIDs;
@property (copy, nonatomic) NSSet *expectedParticipantIDs;

- (void).cxx_destruct;

@end
