@interface VQMProfileInfoCommon : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) int isCaller;
@property (nonatomic) int roomType;
@property (nonatomic) int openFrom;
@property (nonatomic) int kernalTypeBegin;
@property (nonatomic) int kernalTypeFinal;
@property (nonatomic) unsigned long long timestampSignalSendUnix;
@property (nonatomic) unsigned long long timestampSignalRecvUnix;
@property (nonatomic) unsigned long long timestampBeginUnix;
@property (nonatomic) unsigned long long timestampBegin;
@property (nonatomic) unsigned long long timestampUiFirstAppear;
@property (nonatomic) unsigned long long timestampUiClickAccepting;
@property (nonatomic) unsigned long long timestampUiAccept;
@property (nonatomic) unsigned long long timestampUiWillQuit;
@property (nonatomic) unsigned long long timestampFinal;
@property (nonatomic) int isAccepted;
@property (nonatomic) int isEnded;
@property (nonatomic) int isInterrput;
@property (nonatomic) unsigned long long timestampUiMainFirstAppear;
@property (nonatomic) unsigned long long lastConfirmingByPollingInterval;
@property (nonatomic) unsigned long long dataFlutterErrorState;
@property (nonatomic) int dataStateBeforeCallEnd;

+ (void)initialize;

- (int)infoBits;
- (unsigned long long)timestampUnixWithTimestampStready:(unsigned long long)a0;

@end
