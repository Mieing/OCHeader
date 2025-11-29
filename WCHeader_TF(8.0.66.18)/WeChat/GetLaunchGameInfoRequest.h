@class BaseRequest, NSString;

@interface GetLaunchGameInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *launchAppId;
@property (retain, nonatomic) NSString *bizAppId;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
