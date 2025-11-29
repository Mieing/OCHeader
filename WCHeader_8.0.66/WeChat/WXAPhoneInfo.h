@class NSString;

@interface WXAPhoneInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mobile;
@property (retain, nonatomic) NSString *showMobile;
@property (nonatomic) BOOL needAuth;
@property (nonatomic) BOOL allowSendSms;
@property (retain, nonatomic) NSString *encryptedData;
@property (retain, nonatomic) NSString *iv;
@property (retain, nonatomic) NSString *cloudId;

+ (void)initialize;

@end
