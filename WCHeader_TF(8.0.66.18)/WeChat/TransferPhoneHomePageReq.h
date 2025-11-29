@class BaseRequest;

@interface TransferPhoneHomePageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL isContractSigned;

+ (void)initialize;

@end
