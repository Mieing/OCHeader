@class BaseRequest, NSString;

@interface MmecGetProductQRCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *promoterKey;

+ (void)initialize;

@end
