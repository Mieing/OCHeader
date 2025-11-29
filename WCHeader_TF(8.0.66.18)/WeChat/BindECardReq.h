@class BaseRequest, NSString;

@interface BindECardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ecardType;
@property (retain, nonatomic) NSString *reqSerial;
@property (retain, nonatomic) NSString *verifyCode;
@property (retain, nonatomic) NSString *bindToken;
@property (nonatomic) unsigned int openScene;

+ (void)initialize;

@end
