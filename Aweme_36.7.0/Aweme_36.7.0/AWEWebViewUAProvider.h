@class NSString;

@interface AWEWebViewUAProvider : NSObject <BDPWebViewUADelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableUAFetch;
- (id)fetchSystemUserAgentFromeCache;
- (void)fetchLastestSystemUserAgentWithCompletion:(id /* block */)a0;
- (void)fetchSystemUserAgentWithCompletion:(id /* block */)a0;
- (void)registerUAProvider;

@end
