@class NSString, WBHttpRequest, WBAuthorizeRequest;

@interface WBQuickAuth : NSObject <WBHttpRequestDelegate> {
    WBAuthorizeRequest *authorizeRequest;
    WBHttpRequest *realRequest;
    WBQuickAuth *_retained_self;
}

@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fixedUrlStringFromURL:(id)a0 withSplitString:(id)a1;
- (void)authorizeDidFinishWithResponseCode:(long long)a0 info:(id)a1;
- (id)initWithAuthorizeRequest:(id)a0;
- (id)tokenFromKeyChain;
- (void)request:(id)a0 didReceiveResponse:(id)a1;
- (void)request:(id)a0 didReciveRedirectResponseWithURI:(id)a1;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (BOOL)load;
- (void).cxx_destruct;
- (void)test;
- (void)dealloc;

@end
