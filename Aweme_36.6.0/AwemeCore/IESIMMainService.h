@class NSString;

@interface IESIMMainService : HTSService <IESIMMainService, AWEDigitalWellbeingMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)isTeenMode;
- (void)bytedVerifyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)realNameVerifyWithParams:(id)a0 identityParams:(id)a1 faceVerificationOnly:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isYouthControlEnabled;
- (BOOL)isPersonalRecommendSwitchOn;
- (long long)channelTypeWithReferString:(id)a0;
- (BOOL)isAWEUserRealNameVerifyStatusPassed;
- (id)shareURLAllowListShortAllowList;
- (BOOL)hasSwitchSearchGiphy;
- (long long)maxMessageCountWhenShowRecommend;
- (BOOL)isBasicMode;
- (BOOL)isStricterTeenMode;
- (BOOL)isDUXConciseMode;
- (long long)ageFromAweUser:(id)a0;
- (BOOL)bizDowngradeSearchIMEntry;
- (id)AWEAccountPrivacyPolicyAgree;
- (void)updateVerifyStatus:(id /* block */)a0;
- (BOOL)hasAgreedPrivacyAlert;
- (id)recallMessageManagerLastRecalledMessage;
- (id)webviewWithRequestURLString:(id)a0 webViewTitle:(id)a1;
- (void)recallMessageManagerAddObserver:(id)a0 handler:(id /* block */)a1;
- (void)recallMessageManagerRemoveObserver:(id)a0;
- (BOOL)viewControllerConformsToAwemeDetailProtocol:(id)a0;
- (id)brandImage;
- (id)aAWEBrandColorAdapter;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;

@end
