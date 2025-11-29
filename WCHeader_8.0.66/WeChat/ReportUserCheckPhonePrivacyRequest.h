@class BaseRequest, NSString;

@interface ReportUserCheckPhonePrivacyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL privacyProtectInfoChecked;

+ (void)initialize;

@end
