@class BaseRequest, NSString;

@interface SubmitPayProductBuyInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *payFuncId;
@property (retain, nonatomic) NSString *payProductId;
@property (retain, nonatomic) NSString *payAppId;
@property (retain, nonatomic) NSString *remarks;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
