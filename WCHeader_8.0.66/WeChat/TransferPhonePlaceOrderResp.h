@class CheckWin, NSString, RemindWin, RemindWin3, BaseResponse;

@interface TransferPhonePlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int retCodeAction;
@property (retain, nonatomic) RemindWin *jumpWin;
@property (nonatomic) unsigned int forceCheckName;
@property (retain, nonatomic) NSString *replaceorderToken;
@property (retain, nonatomic) RemindWin *remindWin;
@property (retain, nonatomic) CheckWin *checkWin;
@property (retain, nonatomic) RemindWin3 *dupPayWin;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *placeorderToken;
@property (retain, nonatomic) NSString *placeorderExt;
@property (retain, nonatomic) NSString *spamInfoToken;

+ (void)initialize;

@end
