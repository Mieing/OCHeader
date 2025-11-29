@class NSString, NSData, BaseResponse;

@interface CgiGetShortTermQrcodeMchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int qrcodeLevel;
@property (nonatomic) unsigned int qrcodeType;
@property (nonatomic) unsigned long long fixAmount;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSData *saveNotifyInfo;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;

+ (void)initialize;

@end
