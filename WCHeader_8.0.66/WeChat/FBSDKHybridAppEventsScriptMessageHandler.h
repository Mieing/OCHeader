@class NSString;

@interface FBSDKHybridAppEventsScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
