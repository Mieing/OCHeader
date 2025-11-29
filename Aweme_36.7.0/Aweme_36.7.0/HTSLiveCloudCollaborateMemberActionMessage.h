@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveCloudCollaborateMemberActionMessage_RTCInfo;

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
@property (nonatomic) long long joinedUserRoomId;
@property (retain, nonatomic) HTSLiveCloudCollaborateMemberActionMessage_RTCInfo *joinedUserRtcInfo;
@property (nonatomic) BOOL hasJoinedUserRtcInfo;
@property (copy, nonatomic) NSString *rejectReason;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
