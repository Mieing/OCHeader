@class MMWebViewController, NSString;

@interface MMWebViewPluginBase : MMObject <IMMWebViewPluginProtocol>

@property (readonly, weak, nonatomic) MMWebViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebViewOwner:(id)a0;
- (void).cxx_destruct;

@end
