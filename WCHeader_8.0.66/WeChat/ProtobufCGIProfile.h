@class NSString;

@interface ProtobufCGIProfile : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long startConnectTime;
@property (nonatomic) unsigned long long connectSuccessfulTime;
@property (nonatomic) unsigned long long startTlsHandshakeTime;
@property (nonatomic) unsigned long long tlsHandshakeSuccessfulTime;
@property (nonatomic) unsigned long long startSendPacketTime;
@property (nonatomic) unsigned long long sendPacketFinishedTime;
@property (nonatomic) unsigned long long startReadPacketTime;
@property (nonatomic) unsigned long long readPacketFinishedTime;
@property (nonatomic) unsigned long long startEncodePacketTime;
@property (nonatomic) unsigned long long encodePacketFinishedTime;
@property (nonatomic) unsigned long long startDecodePacketTime;
@property (nonatomic) unsigned long long decodePacketFinishedTime;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long channelType;
@property (nonatomic) unsigned long long protocolType;
@property (retain, nonatomic) NSString *netLabel;
@property (nonatomic) unsigned long long startTaskTick;
@property (nonatomic) unsigned long long startTaskTimeStamp;
@property (nonatomic) unsigned long long endTaskTick;

- (id)initWithCGIProfile:(const void *)a0;
- (void).cxx_destruct;

@end
