@class BaseRequest, NSString;

@interface GetWxaDebugInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL isLast;
@property (nonatomic) unsigned int devUseruin;

+ (void)initialize;

@end
