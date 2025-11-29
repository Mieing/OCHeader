@class VoipDeviceInfo, BaseRequest, NSString, NSMutableArray, VoipRelayData;

@interface VoipInviteReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int inviteUserCount;
@property (retain, nonatomic) NSMutableArray *toUsernameList;
@property (retain, nonatomic) VoipRelayData *peerId;
@property (retain, nonatomic) VoipRelayData *capInfo;
@property (nonatomic) int netType;
@property (nonatomic) int callType;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) unsigned int inviteType;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) int hdvideo;
@property (nonatomic) unsigned int inviteId;
@property (nonatomic) unsigned int isWksimCard;
@property (nonatomic) unsigned int nicCnt;
@property (retain, nonatomic) NSMutableArray *nicSet;
@property (nonatomic) unsigned int ipStack;
@property (retain, nonatomic) VoipDeviceInfo *deviceInfo;

+ (void)initialize;

@end
