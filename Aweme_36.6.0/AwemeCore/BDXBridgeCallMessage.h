@class NSString, NSDictionary, WKWebView, NSURL, NSNumber;

@interface BDXBridgeCallMessage : NSObject

@property (weak, nonatomic) WKWebView *wkWebView;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *methodNamespace;
@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *iframeURLString;
@property (retain, nonatomic) NSURL *invokeURL;
@property (retain, nonatomic) NSNumber *isMainFrame;
@property (copy, nonatomic) NSString *frameURL;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) NSNumber *authStatus;
@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSNumber *sendTimeStamp;
@property (retain, nonatomic) NSNumber *receivedTimeStamp;
@property (retain, nonatomic) NSNumber *requestDecodeDuration;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL backgroundThreadCall;

+ (id)recevieMessageFromWebViewWithCallData:(id)a0;

- (void).cxx_destruct;

@end
