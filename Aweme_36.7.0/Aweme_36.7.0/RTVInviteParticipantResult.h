@class NSString, AWEIMGroupCreationResult;

@interface RTVInviteParticipantResult : NSObject

@property (readonly, copy, nonatomic) NSString *inviteID;
@property (readonly, nonatomic) unsigned long long inviteType;
@property (retain, nonatomic) AWEIMGroupCreationResult *groupCreationResult;

- (id)initWithInviteID:(id)a0 inviteType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
