@class RelayConnSet, NSString, VoipRelayData, SKBuiltinBuffer_t, DirectConnSet, GetNICAddrSvrSet, NSMutableArray, JbmBitrateRsParam, VoipAddrSet;

@interface VoipMultiRelayData : WXPBGeneratedMessage

@property (retain, nonatomic) VoipRelayData *peerId;
@property (retain, nonatomic) VoipRelayData *capInfo;
@property (nonatomic) int sendingType;
@property (retain, nonatomic) VoipAddrSet *voipSvrAddr;
@property (retain, nonatomic) VoipAddrSet *punchSvrAddr;
@property (nonatomic) int voipNetQuality;
@property (nonatomic) int linkDisconnectHbInterval;
@property (nonatomic) int linkDisconnectHbCnt;
@property (nonatomic) unsigned int protocolEncryptLength;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientHeadSigns;
@property (nonatomic) unsigned int oppositeClientVersion;
@property (retain, nonatomic) VoipAddrSet *tcpSvrAddr;
@property (nonatomic) int arqstrategy;
@property (nonatomic) int arqcacheLen;
@property (nonatomic) int arqrttThreshold;
@property (nonatomic) int arqusedRateThreshold;
@property (nonatomic) int arqrespRateThreshold;
@property (nonatomic) int encryptStrategy;
@property (nonatomic) int fecsvrCtr;
@property (retain, nonatomic) SKBuiltinBuffer_t *feckeyPara1;
@property (retain, nonatomic) SKBuiltinBuffer_t *feckeyPara2;
@property (nonatomic) int qosStrategy;
@property (retain, nonatomic) SKBuiltinBuffer_t *encryptKeyBuf;
@property (nonatomic) unsigned int oppositeDeviceType;
@property (nonatomic) unsigned int redirectInitThreshold;
@property (nonatomic) unsigned int bothSideSwitchFlag;
@property (retain, nonatomic) JbmBitrateRsParam *jbmBitrateRsConfig;
@property (retain, nonatomic) SKBuiltinBuffer_t *generalBsintStrategyBuf;
@property (nonatomic) unsigned int scoreIntervalDay;
@property (retain, nonatomic) NSString *scoreTitle;
@property (nonatomic) unsigned int natDetectSvrCnt;
@property (retain, nonatomic) NSMutableArray *natDetectSvr;
@property (retain, nonatomic) RelayConnSet *relayConnSet;
@property (retain, nonatomic) DirectConnSet *directConnSet;
@property (retain, nonatomic) GetNICAddrSvrSet *getNicAddrSvrSet;

+ (void)initialize;

@end
