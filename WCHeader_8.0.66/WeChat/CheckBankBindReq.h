@class BaseRequest, NSString;

@interface CheckBankBindReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *payeeEncName;
@property (retain, nonatomic) NSString *bankCardEncNo;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankType;

+ (void)initialize;

@end
