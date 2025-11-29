@class VoipMultiRelayConnData, NSMutableArray, BaseResponse;

@interface VoipRedirectResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) int relayAddrCount;
@property (retain, nonatomic) NSMutableArray *relayAddrList;
@property (nonatomic) int punchAddrCount;
@property (retain, nonatomic) NSMutableArray *punchAddrList;
@property (nonatomic) long long roomKey;
@property (nonatomic) int roomMemberId;
@property (nonatomic) int tcpAddrCount;
@property (retain, nonatomic) NSMutableArray *tcpAddrList;
@property (nonatomic) int redirectThreshold;
@property (nonatomic) int redirectDecision;
@property (retain, nonatomic) VoipMultiRelayConnData *newConnSet;

+ (void)initialize;

@end
