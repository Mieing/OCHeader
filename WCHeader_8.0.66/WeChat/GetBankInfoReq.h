@class BaseRequest, NSString;

@interface GetBankInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bankCardEncNo;

+ (void)initialize;

@end
