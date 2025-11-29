@class NSString;

@interface RejectCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long inviterUserId;
@property (nonatomic) long long collaborateRoomId;
@property (nonatomic) long long userRoomId;
@property (nonatomic) long long inviteId;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
