@class NSString, VoipAddrSet, NSMutableArray;

@interface DirectConnInfo : WXPBGeneratedMessage

@property (nonatomic) int connId;
@property (retain, nonatomic) NSString *localNicDeviceId;
@property (retain, nonatomic) NSString *remoteNicDeviceId;
@property (nonatomic) int localNetType;
@property (nonatomic) int remoteNetType;
@property (nonatomic) int statInterval;
@property (retain, nonatomic) VoipAddrSet *punchSvr;
@property (nonatomic) unsigned int natDetectSessionCnt;
@property (retain, nonatomic) NSMutableArray *natDetectSession;
@property (nonatomic) int localNicType;
@property (nonatomic) int remoteNicType;

+ (void)initialize;

@end
