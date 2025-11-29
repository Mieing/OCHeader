@class NSString, WKUserContentController;

@interface BDWWeakScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) WKUserContentController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
