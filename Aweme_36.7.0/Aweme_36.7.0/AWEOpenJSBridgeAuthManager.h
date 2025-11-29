@class NSString;

@interface AWEOpenJSBridgeAuthManager : NSObject <IESBridgeAuthManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAuthManger:(id)a0 isAuthorizedMethod:(id)a1 success:(BOOL)a2 forURL:(id)a3 stage:(id)a4 list:(id)a5;

- (BOOL)authManager:(id)a0 isAuthorizedMethod:(id)a1 forURL:(id)a2;
- (void)authManager:(id)a0 isAuthorizedMethod:(id)a1 success:(BOOL)a2 forURL:(id)a3 stage:(id)a4 list:(id)a5;
- (id)init;

@end
