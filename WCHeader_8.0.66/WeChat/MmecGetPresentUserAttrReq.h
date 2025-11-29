@class BaseRequest, NSString;

@interface MmecGetPresentUserAttrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *presentOrderId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
