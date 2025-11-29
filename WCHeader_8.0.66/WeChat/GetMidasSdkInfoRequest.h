@class BaseRequest, NSString;

@interface GetMidasSdkInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *sdkVersion;

+ (void)initialize;

@end
