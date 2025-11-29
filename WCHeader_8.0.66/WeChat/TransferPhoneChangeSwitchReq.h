@class BaseRequest;

@interface TransferPhoneChangeSwitchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int switchChangeType;
@property (nonatomic) unsigned int grantFlag;

+ (void)initialize;

@end
