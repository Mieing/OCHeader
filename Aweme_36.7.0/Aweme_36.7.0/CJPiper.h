@class WKWebView, NSMutableDictionary, IESBridgeEngine_Deprecated;

@interface CJPiper : NSObject

@property (retain, nonatomic) IESBridgeEngine_Deprecated *deprecatedBridgeEngine;
@property (retain, nonatomic) NSMutableDictionary *callbackHandlers;
@property (weak, nonatomic) WKWebView *webView;

- (void)processIFrameMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)flushMessages;

@end
