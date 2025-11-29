@class IESGCPCGTXLoginModeChooseController, NSString;

@interface IESGCPCGTXMobileLoginComponent : IESGCPCGTXLoginComponent <IESGCPCGLoginTXService, IESGCPCGTXLoginModeChoosePageDelegate, IESGCPCGInstanceActions>

@property (retain, nonatomic) IESGCPCGTXLoginModeChooseController *controller;
@property (nonatomic) BOOL needFilterQQLoginRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceiveRTCCustomMessage:(id)a1;
- (void)playInstance:(id)a0 didReceiveServerPushedCustomNotice:(id)a1;
- (void)onPageAppear;
- (void)_writeLoginInfoCacheWithGameID:(id)a0 loginType:(int)a1;
- (void)_clearLoginInfoCacheWithGameID:(id)a0 loginType:(int)a1;
- (void)bindAccountIfNeededWithGameID:(id)a0 completion:(id /* block */)a1;
- (id)_readLoginInfoCacheWithGameID:(id)a0;
- (id)_getTxJumpTXInfoFromJumpLoginInfo:(id)a0 loginType:(int)a1;
- (void)_handleLoginJumpResultWithGameID:(id)a0 logID:(id)a1 jumpTxType:(int)a2;
- (BOOL)_isLoginInfoCacheValidWithGameID:(id)a0;
- (void)_handleRTCLoginMessageWithInstance:(id)a0 requestInfo:(id)a1;
- (void)_handleRTCLoginResultMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
