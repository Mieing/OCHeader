@class BaseRequest, NSString;

@interface QrySettingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
