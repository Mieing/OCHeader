@class BaseRequest, NSString, JsApiRequest, SKBuiltinBuffer_t;

@interface MMCgiTransferRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) JsApiRequest *jsApiRequest;
@property (retain, nonatomic) NSString *h5Authtoken;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) NSString *h5Url;
@property (nonatomic) unsigned int jsApiControlBytesIndex;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *pubKeyToken;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *routeTag;

+ (void)initialize;

@end
