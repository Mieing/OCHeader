@class NSString;

@interface CSJWCMiniappManager : NSObject <CSJWCApiProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handleWCMiniappActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)validWCOpenSDK;
+ (BOOL)pcsj_handleWCMiniappSchemeActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)pcsj_handleWCMiniappOpenSDKActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
+ (void)pcsj_wcMiniappInitializeStatsTrackerWithMiniappInfo:(id)a0 success:(BOOL)a1;
+ (void)pcsj_wcMiniappBackupActionWithModel:(id)a0 context:(id)a1 success:(BOOL)a2 completionBlock:(id /* block */)a3;
+ (id)pcsj_wcMiniappOpenSDKWithResponse:(id)a0;
+ (void)pcsj_launchMiniappWithInfo:(id)a0 launchInfo:(id)a1 complete:(id /* block */)a2;
+ (void)pcsj_launchMiniappWithLaunchInfo:(id)a0 complete:(id /* block */)a1;
+ (void)pcsj_openSDKRegisterAppWithInfo:(id)a0 complete:(id /* block */)a1;
+ (id)pcsj_wcMiniappLinkSchemeWithResponse:(id)a0;
+ (id)pcsj_urlWithString:(id)a0;
+ (id)pcsj_wcMiniappTypeWithMeta:(id)a0 success:(BOOL)a1;
+ (BOOL)pcsj_validWCMiniappQueriesSchemes;
+ (id)manager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copy;
- (id)mutableCopy;

@end
