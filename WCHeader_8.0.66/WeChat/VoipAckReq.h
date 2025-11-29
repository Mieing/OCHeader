@class VoipDeviceInfo, BaseRequest, NSString, VoipRelayData, NSMutableArray;

@interface VoipAckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int preConnect;
@property (retain, nonatomic) VoipRelayData *peerId;
@property (retain, nonatomic) VoipRelayData *capInfo;
@property (nonatomic) int netType;
@property (retain, nonatomic) NSString *callerName;
@property (nonatomic) int ackStatus;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) unsigned int isWksimCard;
@property (nonatomic) unsigned int nicCnt;
@property (retain, nonatomic) NSMutableArray *nicSet;
@property (nonatomic) unsigned int ipStack;
@property (retain, nonatomic) VoipDeviceInfo *deviceInfo;

+ (void)initialize;

@end
