@class BaseRequest, NSString;

@interface RoamEncKeyGenReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
