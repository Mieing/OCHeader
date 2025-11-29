@class NSString, NSMutableDictionary, AWEPayOuterPayEntranceHandler;

@interface AWEPayOuterPayManager : NSObject <CJPayAPIDelegate, AWEUserMessage>

@property (nonatomic) BOOL hidePreLoginGuideAlert;
@property (nonatomic) BOOL isOuterDypaying;
@property (nonatomic) long long handledLastTime;
@property (retain, nonatomic) NSMutableDictionary *outerPaySchemaParams;
@property (copy, nonatomic) NSString *latestActionHash;
@property (nonatomic) BOOL isKickOutLogin;
@property (nonatomic) BOOL inPayingAndSwitchAccount;
@property (retain, nonatomic) AWEPayOuterPayEntranceHandler *currHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableCJPayLaunchOptimize;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willLogoutWithUserID:(id)a0;
- (void)event:(id)a0 params:(id)a1;
- (BOOL)hasAgreedPrivacyAlert;
- (void)onResponse:(id)a0;
- (void)buildSchemaParamsWith:(id)a0;
- (void)outerPayEvent:(id)a0 params:(id)a1;
- (void)beginPay;
- (void)p_openBytePayDeskImplWithSchemaParams;
- (void)buildSchemaParamsWithURL:(id)a0;
- (BOOL)checkPrivacyAlertAgreeStatusInLoginPage;
- (BOOL)openBytePayDeskWithSchemaParams:(id)a0;
- (void)p_getLastLoginUserV2;
- (BOOL)p_getLastLoginUser;
- (id)getLiteFallBackOutPaySchema;
- (void)endPay;
- (BOOL)canProcessLogout;
- (void)cjpayHostSwitchAccount:(id)a0;
- (void)p_logOutDismiss:(id)a0;
- (BOOL)handleDyPayURL:(id)a0 handler:(id)a1;
- (void)requestCreateOrderBeforeOpenBytePayDeskWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
