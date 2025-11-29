@class BaseRequest, NSString;

@interface QueryPfInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *pfOrderNo;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
