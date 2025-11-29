@class BaseRequest, NSString;

@interface WxaRuntimeHostAttrSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *hostAppid;

+ (void)initialize;

@end
