@class BaseRequest, NSString;

@interface MmecGetPresentOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long orderId;
@property (nonatomic) unsigned int getScene;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int cgiCompatibilityVersion;
@property (nonatomic) unsigned int isGiver;

+ (void)initialize;

@end
