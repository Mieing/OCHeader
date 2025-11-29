@class SKBuiltinBuffer_t, NSString, VoipMultiRelayData, NSMutableArray, BaseResponse;

@interface VoipInviteResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) int addrCount;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (nonatomic) long long roomKey;
@property (nonatomic) int roomMemberId;
@property (retain, nonatomic) VoipMultiRelayData *relayData;
@property (nonatomic) int netQualityCnt;
@property (retain, nonatomic) NSMutableArray *netQualityList;
@property (nonatomic) int audioTsdfBeyond3G;
@property (nonatomic) int audioTsdfEdge;
@property (nonatomic) int passthroughQosAlgorithm;
@property (nonatomic) int fastPlayRepair;
@property (nonatomic) int voipSyncInterval;
@property (nonatomic) int newP2S;
@property (nonatomic) int audioDtx;
@property (nonatomic) unsigned int tcpCnt;
@property (nonatomic) unsigned int switchInterval;
@property (nonatomic) int hw264SvrCfg;
@property (nonatomic) int audioEnableRmioAndS3A;
@property (nonatomic) int audioEnableSpkec;
@property (nonatomic) unsigned int audioAecMode5;
@property (nonatomic) unsigned int svrCfgListV;
@property (nonatomic) unsigned int enableDataAccept;
@property (nonatomic) unsigned int audioEnableConfigMic;
@property (nonatomic) unsigned int reInviteInterval;
@property (nonatomic) unsigned int switchFlag;
@property (nonatomic) unsigned int wifiScanInterval;
@property (nonatomic) unsigned int qosLocalMaxBr;
@property (nonatomic) int audioEnableXnoiseSup;
@property (retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssued;
@property (nonatomic) unsigned long long switchFlagExt;
@property (retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssuedPb;
@property (retain, nonatomic) NSString *verificationUrl;

+ (void)initialize;

@end
