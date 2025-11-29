@interface LeaveCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long collaborateRoomId;
@property (nonatomic) long long toUserId;
@property (nonatomic) long long toUserRoomId;

+ (id)descriptor;

@end
