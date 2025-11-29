@class NSData;

@interface F2FDialParam : WXPBGeneratedMessage

@property (nonatomic) unsigned int strategy;
@property (nonatomic) unsigned int linkDisconnectHbInterval;
@property (nonatomic) unsigned int linkDisconnectRetryCnt;
@property (nonatomic) unsigned int protocolEncryptLength;
@property (retain, nonatomic) NSData *clientHeadSigns;
@property (nonatomic) unsigned int audioDtx;
@property (nonatomic) unsigned int switchTcpPktCntThreshold;
@property (nonatomic) unsigned int switchInterval;
@property (nonatomic) unsigned int syncInterval;

+ (void)initialize;

@end
