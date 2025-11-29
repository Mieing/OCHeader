@interface CloudCollaboratePingReq : IESLivePBBaseMessage

@property (nonatomic) long long colalborateRoomId;
@property (nonatomic) long long userRoomId;

+ (id)descriptor;

@end
