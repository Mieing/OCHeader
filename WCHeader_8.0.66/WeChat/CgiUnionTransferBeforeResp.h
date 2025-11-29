@class NSString, CgiUnionTransferNoticeItem, BaseResponse;

@interface CgiUnionTransferBeforeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *placeorderReserves;
@property (nonatomic) unsigned int amountRemindBit;
@property (retain, nonatomic) CgiUnionTransferNoticeItem *notice;
@property (retain, nonatomic) NSString *receiverMerchantDesc;
@property (retain, nonatomic) NSString *receiverStaffDesc;
@property (retain, nonatomic) NSString *receiverEnterpriseName;
@property (retain, nonatomic) NSString *payTitle;
@property (retain, nonatomic) NSString *receiverMerchantTitle;

+ (void)initialize;

@end
