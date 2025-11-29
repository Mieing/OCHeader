@class NSString, NSDictionary, WKWebView, IESBridgePerfData, NSNumber, IESBridgeMessageHandlerConfiguration;

@interface IESBridgeMessage : NSObject

@property (copy, nonatomic) id /* block */ executorJSCallBackBlock;
@property (retain, nonatomic) IESBridgeMessageHandlerConfiguration *configuration;
@property (copy, nonatomic) NSDictionary *messageBody;
@property (weak, nonatomic) WKWebView *wkWebView;
@property (copy, nonatomic) NSString *wkWebViewUrl;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSDictionary *invokeParams;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *methodNamespace;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *beginTime;
@property (copy, nonatomic) NSString *endTime;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long from;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *iframeURLString;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) IESBridgePerfData *perfData;
@property (nonatomic) BOOL disableJSBErrorMonitor;
@property (retain, nonatomic) NSNumber *isMainFrame;
@property (retain, nonatomic) NSString *frameURL;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) IESBridgeMessage *js2NativeMessage;
@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) BOOL isInternalNamespaceError;

+ (id)generateCurrentTimeString;
+ (id)statusDescriptionWithStatusCode:(long long)a0;
+ (id)receiveMessageDictionary:(id)a0 wkWebView:(id)a1 wkWebViewUrl:(id)a2;
+ (id)receiveMessageDictionary:(id)a0 wkWebView:(id)a1 wkWebViewUrl:(id)a2 callback:(id /* block */)a3;

- (id)bpea_pageContext;
- (id)bpea_apiContext;
- (id)bpea_fetchAPIContextFromOwn;
- (id)bpea_fetchAPIContextFromGlobal;
- (id)bpea_fixedNamespace;
- (id)bpea_generateAPIContext;
- (id)sec_piperContext;
- (id)wrappedParamsString;
- (id)messageWithIESJS2NativeExecutorJSCallBackBlock:(id /* block */)a0 configuration:(id)a1;
- (id)initWithDictionary:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
