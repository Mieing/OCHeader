@class NSString;

@interface FBSDKWebViewAppLinkResolverWebViewDelegate : NSObject <WKNavigationDelegate>

@property (copy, nonatomic) id /* block */ didFinishLoad;
@property (copy, nonatomic) id /* block */ didFailLoadWithError;
@property (nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
