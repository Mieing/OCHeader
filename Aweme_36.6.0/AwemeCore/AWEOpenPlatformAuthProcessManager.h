@interface AWEOpenPlatformAuthProcessManager : NSObject

+ (void)mergeIdentifyScopeForEntranceModel:(id)a0;
+ (Class)getDelegateClassFromModel:(id)a0;
+ (id)commonParamsWithModel:(id)a0;
+ (BOOL)useNativeLibraAuthWithModel:(id)a0;
+ (void)tryScanQrcodeWithModel:(id)a0 withCompletion:(id /* block */)a1;
+ (void)requireLoginWithModel:(id)a0 params:(id)a1 withCompletion:(id /* block */)a2;
+ (BOOL)isValidEntranceModel:(id)a0;
+ (void)realStartAuthWithModel:(id)a0 params:(id)a1 withCompletion:(id /* block */)a2;
+ (void)handleBindMobileNumber:(id)a0 authInfo:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)gotoSceneAuthOrSlientAuthWithModel:(id)a0 authInfo:(id)a1 params:(id)a2 withCompletion:(id /* block */)a3;
+ (void)silentAuthWithModel:(id)a0 params:(id)a1 authInfo:(id)a2 completion:(id /* block */)a3;
+ (void)requestConfirmIfNeededWithQRToken:(id)a0 xTtPassportAuthState:(id)a1;
+ (unsigned long long)authSceneFromFlowType:(unsigned long long)a0;
+ (void)showFullScreenAuthVCWithModel:(id)a0 flowManager:(id)a1 completion:(id /* block */)a2;
+ (void)showHalfScreenAuthVCWithModel:(id)a0 flowManager:(id)a1 completion:(id /* block */)a2;
+ (void)setupAuthBlockWithFullVC:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)handleRespFailedWithErrCode:(long long)a0 subErrCode:(long long)a1 errMsg:(id)a2 originError:(id)a3 model:(id)a4 completion:(id /* block */)a5;
+ (void)handleRespSuccessWithTicket:(id)a0 permissions:(id)a1 model:(id)a2 completion:(id /* block */)a3;
+ (void)startAuthWithModel:(id)a0 withCompletion:(id /* block */)a1;

@end
