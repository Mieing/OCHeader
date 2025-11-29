@class BaseRequest;

@interface TransferPhoneGetSwitchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int grantFlag;

+ (void)initialize;

@end
