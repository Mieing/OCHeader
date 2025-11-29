@class NSString, VoipAddrSet;

@interface RelayConnInfo : WXPBGeneratedMessage

@property (nonatomic) int connId;
@property (retain, nonatomic) NSString *localNicDeviceId;
@property (retain, nonatomic) NSString *remoteNicDeviceId;
@property (nonatomic) int localNetType;
@property (nonatomic) int remoteNetType;
@property (nonatomic) int statInterval;
@property (retain, nonatomic) VoipAddrSet *relaySvr;
@property (retain, nonatomic) VoipAddrSet *relayTcpSvr;
@property (nonatomic) int localNicType;
@property (nonatomic) int remoteNicType;

+ (void)initialize;

@end
