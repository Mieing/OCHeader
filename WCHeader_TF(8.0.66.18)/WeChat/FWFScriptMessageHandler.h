@class NSString, FWFScriptMessageHandlerFlutterApiImpl;

@interface FWFScriptMessageHandler : FWFObject <WKScriptMessageHandler>

@property (readonly, nonatomic) FWFScriptMessageHandlerFlutterApiImpl *scriptMessageHandlerAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void).cxx_destruct;

@end
