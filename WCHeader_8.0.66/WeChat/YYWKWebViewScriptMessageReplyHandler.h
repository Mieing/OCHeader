@class NSString;
@protocol WKScriptMessageHandlerWithReply;

@interface YYWKWebViewScriptMessageReplyHandler : NSObject <WKScriptMessageHandlerWithReply>

@property (weak, nonatomic) id<WKScriptMessageHandlerWithReply> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
