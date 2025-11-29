@class BaseRequest, NSString, NSData;

@interface CgiQrocdeScanIdentifySceneReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSData *imageData;

+ (void)initialize;

@end
