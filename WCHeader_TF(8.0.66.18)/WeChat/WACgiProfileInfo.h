@class NSString;

@interface WACgiProfileInfo : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long startConnectTime;
@property (nonatomic) unsigned long long connectSuccessfulTime;
@property (nonatomic) unsigned long long startTlsHandshakeTime;
@property (nonatomic) unsigned long long tlsHandshakeSuccessfulTime;
@property (nonatomic) unsigned long long startSendPacketTime;
@property (nonatomic) unsigned long long startReadPacketTime;
@property (nonatomic) unsigned long long readPacketFinishedTime;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long channelType;
@property (nonatomic) unsigned long long protocolType;
@property (retain, nonatomic) NSString *netLabel;

- (void).cxx_destruct;

@end
