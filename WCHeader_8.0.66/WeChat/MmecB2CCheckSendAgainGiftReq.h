@class BaseRequest, NSString;

@interface MmecB2CCheckSendAgainGiftReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long presentOrderId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
