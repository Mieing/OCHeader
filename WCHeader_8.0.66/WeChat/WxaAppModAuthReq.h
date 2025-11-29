@class BaseRequest, NSString, NSMutableArray;

@interface WxaAppModAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *modAuthItem;

+ (void)initialize;

@end
