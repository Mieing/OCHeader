@class VoipDeviceInfo, BaseRequest, NSString, VoipRelayData, NSMutableArray;

@interface VoipAnswerReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int roomId;
@property (nonatomic) int answer;
@property (retain, nonatomic) VoipRelayData *peerId;
@property (retain, nonatomic) VoipRelayData *capInfo;
@property (nonatomic) long long roomKey;
@property (nonatomic) int netType;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) int onlyAudio;
@property (nonatomic) unsigned int isWksimCard;
@property (nonatomic) unsigned int nicCnt;
@property (retain, nonatomic) NSMutableArray *nicSet;
@property (nonatomic) unsigned int ipStack;
@property (retain, nonatomic) VoipDeviceInfo *deviceInfo;

+ (void)initialize;

@end
