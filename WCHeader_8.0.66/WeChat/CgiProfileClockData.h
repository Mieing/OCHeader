@class NSString;

@interface CgiProfileClockData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long taskStartTime;
@property (nonatomic) unsigned long long startConnectTime;
@property (nonatomic) unsigned long long connectSuccessfulTime;
@property (nonatomic) unsigned long long startHandshakeTime;
@property (nonatomic) unsigned long long handshakeSuccessfulTime;
@property (nonatomic) unsigned long long startSendPacketTime;
@property (nonatomic) unsigned long long startReadPacketTime;
@property (nonatomic) unsigned long long readPacketFinishedTime;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned int channelType;
@property (nonatomic) unsigned int protocolType;
@property (nonatomic) unsigned long long taskCallbackTime;
@property (retain, nonatomic) NSString *netType;

+ (void)initialize;

@end
