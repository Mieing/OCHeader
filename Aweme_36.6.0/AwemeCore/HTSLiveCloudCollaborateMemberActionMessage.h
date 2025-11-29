@class HTSLiveCommon, HTSLiveUser;

@interface HTSLiveCloudCollaborateMemberActionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) long long collaborateRoomId;
@property (nonatomic) long long inviteId;
@property (nonatomic) long long joinRoomTime;
@property (nonatomic) long long waitSec;

+ (id)descriptor;

@end
