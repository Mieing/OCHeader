@class NSString;
@protocol QBScriptMessageHandlerDelegate;

@interface QBScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) id<QBScriptMessageHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void).cxx_destruct;

@end
