@class NSString;

@interface BDECPigeonParticipantInConversation : NSObject <BDECPigeonParticipantInterface>

@property (nonatomic) long long userID;
@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long role;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *secUserID;
@property (nonatomic) long long silentStatus;
@property (nonatomic) long long silentTime;
@property (retain, nonatomic) NSString *bizRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
