@class BaseRequest, NSMutableArray;

@interface VoipSpeedTestReq : WXPBGeneratedMessage {
    int c2CrttMemoizedSerializedSize;
    int c2SrttMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) unsigned int callType;
@property (nonatomic) unsigned int netType;
@property (nonatomic) unsigned int isConnecting;
@property (nonatomic) unsigned int isConnected;
@property (nonatomic) unsigned int c2Clossrate;
@property (nonatomic) unsigned int c2CrttCnt;
@property (retain, nonatomic) NSMutableArray *c2Crtt;
@property (nonatomic) unsigned int c2SdownLossRate;
@property (nonatomic) unsigned int c2SrttCnt;
@property (retain, nonatomic) NSMutableArray *c2Srtt;
@property (nonatomic) unsigned int sendPkts;
@property (nonatomic) unsigned int rcvPkts;

+ (void)initialize;

@end
