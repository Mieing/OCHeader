@class NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEUserListener : NSObject <AWEUserMessage, AWENetworkMessage, HTSAccountMessage, AWEUserSwitchDelegate, AWEDigitalWellbeingMessage, TTAccountMessageFirstResponder, IESLCMessageHandlerService, AWEUserListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)onAccountSessionExpired:(id)a0;
- (void)onAccountSDKFetchLoginWithJson:(id)a0 response:(id)a1 callbackSchema:(id)a2 completion:(id /* block */)a3;
- (BOOL)isUserLogin;
- (void)didReceiveThirdPartyTokenForUploadAtPlatform:(unsigned long long)a0 authInfo:(id)a1 error:(id)a2;
- (void)synchronizeCookiesWithExtension;
- (BOOL)showVideoUploadingAlertIfNeeded;
- (void)showDigitalWellbeingLockViewIfNeededWithCompletion:(id /* block */)a0;
- (void)uploadTokenOnColdStartIfNeeded;
- (void)didReceiveApiResponse:(id)a0 URL:(id)a1;
- (void)checkAntiAddictedAndShowAlertIfNeededWithLockHint:(id)a0 forbidToastHint:(id)a1 completion:(id /* block */)a2;
- (void)didXTTTokenChanged:(id)a0;
- (void)p_didReceiveApiResponse:(id)a0 URL:(id)a1;
- (BOOL)shouldLogoutWithErrorCode:(id)a0;
- (BOOL)isValidThirdInfo:(id)a0 error:(id)a1;
- (void)uploadTokenWithPlatformTokenInfoModel:(id)a0;
- (void)p_didFinishLogout;
- (void)p_didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (BOOL)shouldUploadToken;
- (void)p_uploadTokenOnColdStartIfNeeded;
- (void)p_handleLostConnectionMessageWithMsg:(id)a0;
- (void)p_handleVerificationCodeLoginMessageWithMsg:(id)a0;
- (id)init;
- (void)dealloc;

@end
