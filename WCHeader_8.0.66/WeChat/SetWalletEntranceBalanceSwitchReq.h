@class BaseRequest;

@interface SetWalletEntranceBalanceSwitchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) unsigned long long operationTimestamp;

+ (void)initialize;

@end
