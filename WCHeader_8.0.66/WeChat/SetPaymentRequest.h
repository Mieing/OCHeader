@class BaseRequest, NSString;

@interface SetPaymentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *certNo;
@property (retain, nonatomic) NSString *tokenSrc;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *bankType;
@property (nonatomic) unsigned int settingState;
@property (nonatomic) unsigned int codeVer;
@property (nonatomic) unsigned int residueNum;

+ (void)initialize;

@end
