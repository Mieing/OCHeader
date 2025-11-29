@class BaseRequest;

@interface QryCancelECardDescReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long busScene;

+ (void)initialize;

@end
