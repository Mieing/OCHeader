@class BaseRequest, NSString;

@interface CheckDemoInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *demoMd5;
@property (retain, nonatomic) NSString *demoPageMd5;

+ (void)initialize;

@end
