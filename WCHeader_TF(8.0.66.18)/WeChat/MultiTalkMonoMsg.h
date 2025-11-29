@class NSString, WXLocalNotificationInfo;

@interface MultiTalkMonoMsg : MonoServiceMsg

@property (retain, nonatomic) WXLocalNotificationInfo *m_notificationInfo;
@property (nonatomic) unsigned long long m_msgReceiveTime;
@property (retain, nonatomic) id m_group;
@property (retain, nonatomic) NSString *m_fromUser;
@property (nonatomic) BOOL m_isCancelMsg;
@property (nonatomic) BOOL m_isNotFriendMsg;
@property (nonatomic) unsigned long long roomID;

+ (id)inviteMsg;
+ (id)notFriendInviteMsg;
+ (id)cancelMsg;
+ (id)inviteMsgWithRoomID:(unsigned long long)a0;
+ (id)notFriendInviteMsgWithRoomID:(unsigned long long)a0;
+ (id)cancelMsgWithRoomID:(unsigned long long)a0;
+ (id)getInviteUserFromGroup:(id)a0;

- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)a0;
- (BOOL)isParaVaild;
- (id)voipNotificationContentInfoWithRequestID:(id)a0;
- (id)localNotificationInfo;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
