@class BaseResponse, RedEnvelopesLiteappJumpInfo, JumpAction, NSData, HbEnvelopSourceNew;

@interface GetDefaultRedpacketResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) HbEnvelopSourceNew *showSource;
@property (retain, nonatomic) NSData *showSourceMac;
@property (retain, nonatomic) NSData *coverInfoBufferForPlaceOrder;
@property (retain, nonatomic) NSData *coverExtBuff;
@property (nonatomic) BOOL useNewLogic;
@property (nonatomic) BOOL forceUseLocalCache;
@property (retain, nonatomic) JumpAction *jumpAction;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *packetListLiteappInfo;
@property (retain, nonatomic) NSData *coverinfo;
@property (nonatomic) unsigned int openRecommendation;
@property (nonatomic) unsigned int recomInterval;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *recommendLiteappInfo;

+ (void)initialize;

@end
