@interface JoinCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long collaborateRoomId;
@property (nonatomic) long long userRoomId;

+ (id)descriptor;

@end
