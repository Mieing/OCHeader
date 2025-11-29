@class NSString;

@interface FBSDKWebViewAppLinkResolver : NSObject <FBSDKAppLinkResolving>

@property (class, readonly, nonatomic) FBSDKWebViewAppLinkResolver *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)followRedirects:(id)a0 handler:(id /* block */)a1;
- (void)appLinkFromURL:(id)a0 handler:(id /* block */)a1;
- (id)parseALData:(id)a0;
- (void)getALDataFromLoadedPage:(id)a0 handler:(id /* block */)a1;
- (id)appLinkFromALData:(id)a0 destination:(id)a1;

@end
