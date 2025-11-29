@class NSData, NSMutableArray, BaseResponse;

@interface VoipCSInviteResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (nonatomic) unsigned int syncInterval;
@property (nonatomic) unsigned int checkPeerCnt;
@property (nonatomic) unsigned int checkPeerInterval;
@property (nonatomic) unsigned int nextInvite;
@property (nonatomic) unsigned int encryptStrategy;
@property (nonatomic) unsigned int maxBitRate;
@property (nonatomic) unsigned int maxFps;
@property (retain, nonatomic) NSData *encryptKeyBuf;
@property (nonatomic) unsigned int tcpStartCnt;
@property (retain, nonatomic) NSMutableArray *tcpAddrList;

+ (void)initialize;

@end
