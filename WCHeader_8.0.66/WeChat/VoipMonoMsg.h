@class NSString, WXLocalNotificationInfo;

@interface VoipMonoMsg : MonoServiceMsg

@property (retain, nonatomic) WXLocalNotificationInfo *m_notificationInfo;
@property (nonatomic) unsigned int m_receiveTime;
@property (nonatomic) unsigned int m_msgType;
@property (nonatomic) unsigned int m_mode;
@property (nonatomic) unsigned long long m_roomId;
@property (nonatomic) long long m_roomKey;
@property (nonatomic) BOOL m_fromAnswered;
@property (nonatomic) unsigned int m_fromScene;
@property (retain, nonatomic) NSString *m_fromUser;
@property (nonatomic) BOOL hasHolded;
@property (nonatomic) long long m_n64MesSvrID;
@property (nonatomic) long long msgID;
@property (retain, nonatomic) NSString *notificationRequestID;
@property (nonatomic) BOOL isFromIlink;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isInvite;
@property (nonatomic) unsigned long long recvTime;

+ (id)defaultServiceType;
+ (id)msgKeyWithRoomID:(unsigned long long)a0;

- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)receiveTimeOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)a0;
- (BOOL)isParaVaild;
- (id)voipNotificationContentInfo;
- (id)localNotificationInfo;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
