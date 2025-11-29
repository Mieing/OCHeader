@class NSData;

@interface FinderFluencyInfo : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) int hot;
@property (nonatomic) int pull;
@property (nonatomic) int finish;
@property (nonatomic) unsigned int globalInitMs;
@property (nonatomic) unsigned int pullCgiMs;
@property (nonatomic) unsigned int showUiMs;
@property (nonatomic) unsigned int downloadBeginMs;
@property (nonatomic) unsigned int dataHandleMs;
@property (nonatomic) unsigned int dbOperMs;
@property (retain, nonatomic) NSData *debugMessage;
@property (nonatomic) unsigned int commentScene;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int cgiType;
@property (nonatomic) unsigned int totalTimeMs;
@property (nonatomic) unsigned int loadingTimeMs;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long startConnectTime;
@property (nonatomic) unsigned long long connectSuccessfulTime;
@property (nonatomic) unsigned long long startTlsHandshakeTime;
@property (nonatomic) unsigned long long tlsHandshakeSuccessfulTime;
@property (nonatomic) unsigned long long startSendPacketTime;
@property (nonatomic) unsigned long long startReadPacketTime;
@property (nonatomic) unsigned long long readPacketFinishedTime;

+ (void)initialize;

@end
