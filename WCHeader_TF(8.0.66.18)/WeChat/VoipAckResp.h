@class SKBuiltinBuffer_t, VoipMultiRelayData, BaseResponse;

@interface VoipAckResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) int roomMemberId;
@property (retain, nonatomic) VoipMultiRelayData *relayData;
@property (nonatomic) int preConnect;
@property (nonatomic) unsigned int tcpCnt;
@property (nonatomic) int audioEnableRmioAndS3A;
@property (nonatomic) unsigned int switchFlag;
@property (nonatomic) unsigned int wifiScanInterval;
@property (retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssued;
@property (nonatomic) unsigned long long switchFlagExt;
@property (retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssuedPb;
@property (nonatomic) unsigned int enableDataAccept;
@property (nonatomic) unsigned int rudpacceptTimeOutTh;
@property (nonatomic) unsigned int svrCfgListV;
@property (nonatomic) unsigned int audioEnableConfigMic;
@property (nonatomic) int hw264SvrCfg;

+ (void)initialize;

@end
