@class BaseRequest, NSString;

@interface RcptInfoQueryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *webviewurl;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
