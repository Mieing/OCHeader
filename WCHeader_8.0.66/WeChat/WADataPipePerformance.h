@class NSString;

@interface WADataPipePerformance : NSObject

@property (nonatomic) unsigned long long datapipeType;
@property (nonatomic) BOOL isConcurrent;
@property (nonatomic) unsigned long long concurrentPriority;
@property (nonatomic) unsigned int concurrentTimeout;
@property (nonatomic) unsigned int dataLengthInBytes;
@property (nonatomic) unsigned int currentQueueNum;
@property (nonatomic) unsigned long long enqueueTimeInMs;
@property (nonatomic) unsigned long long dequeueTimeInMs;
@property (nonatomic) unsigned long long beginCgiTimeInMs;
@property (nonatomic) unsigned long long cgiCallbackTimeInMs;
@property (nonatomic) unsigned long long beginCgiAfterConfirmTimeInMs;
@property (nonatomic) unsigned long long cgiCallbackAfterConfirmTimeInMs;
@property (nonatomic) BOOL needConfirm;
@property (nonatomic) unsigned long long confirmTimeInMs;
@property (nonatomic) unsigned long long confirmResponseTimeInMs;
@property (nonatomic) unsigned long long dataResponseTimeInMs;
@property (nonatomic) unsigned long long taskStartTime;
@property (nonatomic) unsigned long long startConnectTime;
@property (nonatomic) unsigned long long connectSuccessfulTime;
@property (nonatomic) unsigned long long startHandshakeTime;
@property (nonatomic) unsigned long long handshakeSuccessfulTime;
@property (nonatomic) unsigned long long startSendPacketTime;
@property (nonatomic) unsigned long long startReadPacketTime;
@property (nonatomic) unsigned long long readPacketFinishedTime;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long channelType;
@property (nonatomic) unsigned long long protocolType;
@property (copy, nonatomic) NSString *netType;

- (void).cxx_destruct;

@end
