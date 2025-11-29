@class EcsErrorAction, NSString, EcsJumpInfo, MmecSendPresentResp_PaymentParasInfo, BaseResponse;

@interface MmecSendPresentResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *msgXmlInfo;
@property (retain, nonatomic) MmecSendPresentResp_PaymentParasInfo *paymentParams;
@property (retain, nonatomic) NSString *miniShopAppid;
@property (retain, nonatomic) EcsErrorAction *secErrorAction;
@property (nonatomic) unsigned int secDecision;
@property (retain, nonatomic) EcsJumpInfo *payJumpinfo;
@property (retain, nonatomic) NSString *respJson;

+ (void)initialize;

@end
