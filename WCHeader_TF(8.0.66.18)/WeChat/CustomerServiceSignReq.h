@class BaseRequest, NSString;

@interface CustomerServiceSignReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *originUrl;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
