@class NSString, NSDictionary, WKWebView, NSURL, BDXBridgeAuthResult;

@interface BDXBridgeAuthInfo : NSObject

@property (nonatomic) long long containerType;
@property (copy, nonatomic) NSString *namespace;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *frameURL;
@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSURL *invokeUrl;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isMainFrame;
@property (retain, nonatomic) BDXBridgeAuthResult *authResult;

- (void).cxx_destruct;
- (id)init;

@end
