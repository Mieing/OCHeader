@class NSString, NSData, NSMutableArray, BaseResponse;

@interface PstnInviteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) int roomMemberId;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (nonatomic) int pstnSyncInterval;
@property (nonatomic) int checkPeerCnt;
@property (nonatomic) int checkPeerInterval;
@property (nonatomic) unsigned long long callSeq;
@property (nonatomic) unsigned int protoEncryptLength;
@property (retain, nonatomic) NSData *clientHeadSigns;
@property (nonatomic) unsigned int nextInvite;
@property (nonatomic) unsigned int errLevel;
@property (retain, nonatomic) NSString *errTitle;
@property (nonatomic) int encryptStrategy;
@property (retain, nonatomic) NSMutableArray *addrListTcp;
@property (nonatomic) int switchTcpPktCnt;
@property (retain, nonatomic) NSString *retPhoneNumber;
@property (retain, nonatomic) NSData *encryptKeyBuf;
@property (nonatomic) unsigned int callFlag;

+ (void)initialize;

@end
