@class BaseRequest, NSString;

@interface GetBankCardInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *aeskey;

+ (void)initialize;

@end
