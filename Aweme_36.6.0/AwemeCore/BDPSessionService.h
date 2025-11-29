@class NSString;

@interface BDPSessionService : NSObject <BDPSessionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (id)getSession:(id)a0;
- (void)updateSession:(id)a0 sandbox:(id)a1;
- (id)getAnonymousID;
- (void)updateAnonymousID:(id)a0;
- (id)getSessionExpirationDate:(id)a0;
- (void)updateSessionExpirationDate:(id)a0 sandbox:(id)a1;
- (id)getOpenID:(id)a0;
- (void)updateOpenID:(id)a0 sandbox:(id)a1;
- (void)removeOpenIDForSandbox:(id)a0;

@end
