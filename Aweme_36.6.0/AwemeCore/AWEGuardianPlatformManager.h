@class NSString, AWEGuardianPlatformService, DUXLoadingParticleView, AWEGuardianPlatformPasswordVerifyView;

@interface AWEGuardianPlatformManager : NSObject <AWEGuardianPlatformPasswordVerifyViewDelegate, AWEGuardianPlatformPasswordVerifyViewDataSource, AWEGuardianPlatformManagerProtocol>

@property (retain, nonatomic) AWEGuardianPlatformService *guardianPlatformService;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEGuardianPlatformPasswordVerifyView *passwordVerifyView;
@property (copy, nonatomic) NSString *requestBindingSourceObjectID;
@property (copy, nonatomic) id /* block */ requestBindingCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (BOOL)isEnableGuardianPlatformShareURL;
+ (id)guardianPlatformChildRequestBindingMiniAppURLString;
+ (BOOL)p_isLoginUserTeenMode;
+ (id)guardianPlatformEntryMiniAppURLString;
+ (void)makeChildBindingRequestEntryIfNeededWithCompletion:(id /* block */)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)transferToParentalGuardianPlatform;
- (void)p_showLoading;
- (BOOL)shouldShowParentalGuardian;
- (void)p_dismissLoading;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (BOOL)isParentalGuardianChild;
- (BOOL)isParentalGuardianParent;
- (BOOL)isEnabledGuardianPlatformShareURL;
- (void)refreshMinorStatusAndCheckWithCompletion:(id /* block */)a0;
- (BOOL)isUserParentTeenModeOn;
- (BOOL)isUserParentTeenModeOff;
- (void)p_trackAlogWithMessage:(id)a0;
- (id)p_getStartPageWithURLString:(id)a0 enterFromType:(unsigned long long)a1;
- (id)transferToParentalGuardianPlatformResultURLString;
- (void)transferToParentalGuardianPlatformWithEnterFrom:(unsigned long long)a0;
- (void)updateChildTimeLockStatus:(long long)a0 childUserID:(id)a1 secChildUserID:(id)a2 completion:(id /* block */)a3;
- (void)updateChildTeenModeEnabled:(BOOL)a0 childUserID:(id)a1 secChildUserID:(id)a2 completion:(id /* block */)a3;
- (void)getDynamicPassword:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (BOOL)isUserOpenParentModeAsChild;
- (BOOL)isParentalGuardianChildSelfUnbind;
- (void)p_handleGuardianPlatformStateChangedWithEvent:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)p_handleGuardianPlatformShareLinkWithEvent:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)p_getEnterFromStrWithType:(unsigned long long)a0;
- (void)didPasswordChange:(id)a0;
- (void)didDismissPasswordVerifyView:(BOOL)a0;
- (void)transferToChildRequestBindingWithEnterFrom:(unsigned long long)a0;
- (BOOL)isParentalGuardianTeenModeOn;
- (void)handleTimorPigeonEvent:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)desc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)title;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
