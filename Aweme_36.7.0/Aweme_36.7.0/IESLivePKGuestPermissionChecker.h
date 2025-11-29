@class NSString, IESLiveCountTimer;
@protocol IESLiveNoticeActions, IESLiveVerifyConfigAdapter, IESLiveAuthorizationService;

@interface IESLivePKGuestPermissionChecker : NSObject <IESLiveUserActions>

@property (retain, nonatomic) id<IESLiveVerifyConfigAdapter> verifyConfig;
@property (retain, nonatomic) id<IESLiveNoticeActions> noticeActionCreator;
@property (retain, nonatomic) id<IESLiveAuthorizationService> authorizationService;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (retain, nonatomic) IESLiveCountTimer *verifiedTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)verifyRealnameSuccessed;
- (id)verifyScene;
- (void)checkApplyPermissionError:(id)a0 completion:(id /* block */)a1;
- (void)checkReplyPermissionError:(id)a0 completion:(id /* block */)a1;
- (void)checkPermissionError:(id)a0 needToast:(BOOL)a1 completion:(id /* block */)a2;
- (void)checkApplyPermissionError:(id)a0 needErrorToast:(BOOL)a1 completion:(id /* block */)a2;
- (void)needIdentityAuthenticationWithCompletion:(id /* block */)a0 description:(id)a1;
- (void)onShowUnderAgeAlert;
- (void)onShowAssistPhoneAlert;
- (void)onShowBindMobileAlert;
- (void)onShowAppNeedUpdateAlert;
- (void)tryToVerify;
- (void).cxx_destruct;

@end
