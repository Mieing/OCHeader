@class NSNetService, NSString, NSObject;
@protocol OS_nw_browser;

@interface BDByteCastLocalNetworkAuthorizationChecker : NSObject <NSNetServiceDelegate>

@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;
@property (retain, nonatomic) NSNetService *netService;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)checkAuthorizationWithCompletion:(id /* block */)a0;
- (void)onCheckCompletedWithError:(id)a0 allowed:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;

@end
