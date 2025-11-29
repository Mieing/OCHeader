@class BaseRequest, NSString;

@interface VoIPiLinkGetSDKModeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *callerName;
@property (retain, nonatomic) NSString *calleeName;

+ (void)initialize;

@end
