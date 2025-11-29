@class CContact, VoIPMtInviteMsg, MonoServiceMsg, ConfRecvInviteInfo;

@interface VoIPInvitationInfo : NSObject

@property (nonatomic) unsigned long long roomType;
@property (nonatomic) BOOL isFromIlink;
@property (nonatomic) unsigned long long roomID;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) unsigned int receiveTime;
@property (retain, nonatomic) MonoServiceMsg *monoMsg;
@property (retain, nonatomic) VoIPMtInviteMsg *inviteMsg;
@property (retain, nonatomic) ConfRecvInviteInfo *inviteInfo;
@property (nonatomic) unsigned long long scene;

+ (id)infoWithVoipMonoMsg:(id)a0 scene:(unsigned long long)a1;

- (id)initWithMonoMsg:(id)a0 roomID:(unsigned long long)a1 roomKey:(long long)a2 roomType:(unsigned long long)a3 contact:(id)a4 isFromIlink:(BOOL)a5 receiveTime:(unsigned int)a6 inviteMsg:(id)a7 inviteInfo:(id)a8 scene:(unsigned long long)a9;
- (id)newInfoWithRoomType:(unsigned long long)a0;
- (BOOL)isEqualedWithRoomID:(unsigned long long)a0 roomKey:(long long)a1 fromUserName:(id)a2;
- (void).cxx_destruct;

@end
