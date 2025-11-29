@class BaseRequest, NSString, NSData;

@interface CgiQrcodeSaveNotifyMchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int notifyType;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *memo;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long opTimestamp;
@property (retain, nonatomic) NSData *saveNotifyInfo;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;

+ (void)initialize;

@end
