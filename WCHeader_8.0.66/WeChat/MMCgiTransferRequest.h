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

- (void)setRouteTag:(id)a0;
- (id)routeTag;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setAppId:(id)a0;
- (id)appId;
- (void)setPubKeyToken:(id)a0;
- (id)pubKeyToken;
- (void)setScope:(id)a0;
- (id)scope;
- (void)setJsApiControlBytesIndex:(unsigned int)a0;
- (unsigned int)jsApiControlBytesIndex;
- (void)setH5Url:(id)a0;
- (id)h5Url;
- (void)setClientCheckData:(id)a0;
- (id)clientCheckData;
- (void)setH5Authtoken:(id)a0;
- (id)h5Authtoken;
- (void)setJsApiRequest:(id)a0;
- (id)jsApiRequest;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
