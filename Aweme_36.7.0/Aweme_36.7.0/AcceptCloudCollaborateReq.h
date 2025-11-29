@interface AcceptCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long inviterUserId;
@property (nonatomic) long long collaborateRoomId;
@property (nonatomic) long long inviteId;
@property (nonatomic) long long userRoomId;

+ (id)descriptor;

@end
