@class NSString, AAAlertItem, BaseResponse;

@interface AAPayRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *reqkey;
@property (retain, nonatomic) NSString *paymsgid;
@property (retain, nonatomic) NSString *receiverTrueName;
@property (retain, nonatomic) NSString *msgxml;
@property (retain, nonatomic) AAAlertItem *alertItem;
@property (retain, nonatomic) NSString *outTradeNo;

+ (void)initialize;

@end
