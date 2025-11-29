@class NSString;
@protocol WKScriptMessageHandler;

@interface CSJScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) id<WKScriptMessageHandler> realScriptMessageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHandler:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
