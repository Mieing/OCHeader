@class NSString;

@interface CreateCloudCollaborateReq : IESLivePBBaseMessage

@property (nonatomic) long long collaborateRoomId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
