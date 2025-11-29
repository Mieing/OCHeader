@class NSString;

@interface BDASifProtocolManager : NSObject <BDASifProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;

- (id)getHostUserAgent;
- (id)getAppScheme;
- (void)disableSwipe:(BOOL)a0 container:(id)a1;
- (BOOL)routeOpenURL:(id)a0 userInfo:(id)a1;
- (void)requireLoginCompletion:(id /* block */)a0;
- (unsigned long long)getAppTheme;
- (void)openLive:(id)a0;
- (void)pageViewDidLoad:(id)a0;
- (void)pageDealloc:(id)a0;
- (id)getUserInfo;
- (void)openLink:(id)a0;

@end
