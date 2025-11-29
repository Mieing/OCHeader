@interface InviteCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long inviteeUserId;
@property (nonatomic) long long collaborateRoomId;

+ (id)descriptor;

@end
