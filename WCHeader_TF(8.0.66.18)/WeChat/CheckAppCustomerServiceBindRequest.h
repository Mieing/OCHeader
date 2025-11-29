@class BaseRequest, NSString;

@interface CheckAppCustomerServiceBindRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *corpid;
@property (retain, nonatomic) NSString *kfurl;

+ (void)initialize;

@end
