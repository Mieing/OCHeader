@class BaseRequest, NSString;

@interface GetMCreditLineTokenSignReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardNo;
@property (nonatomic) unsigned long long creditLine;
@property (retain, nonatomic) NSString *takeMessage;

+ (void)initialize;

@end
