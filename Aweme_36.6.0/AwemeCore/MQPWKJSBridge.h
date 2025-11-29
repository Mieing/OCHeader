@class NSString;
@protocol MQPJSBridgeURLHandler;

@interface MQPWKJSBridge : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) id<MQPJSBridgeURLHandler> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
