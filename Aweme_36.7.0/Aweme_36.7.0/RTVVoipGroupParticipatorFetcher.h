@class NSString;

@interface RTVVoipGroupParticipatorFetcher : NSObject <RTVInviteParticipantDataFetcher>

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0;
- (id)fetchUsers;
- (void).cxx_destruct;

@end
