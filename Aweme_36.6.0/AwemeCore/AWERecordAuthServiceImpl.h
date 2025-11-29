@class NSNumber, NSString;
@protocol IESServiceProvider;

@interface AWERecordAuthServiceImpl : NSObject <FPDependentInitable, AWERecordAuthService>

@property (retain, nonatomic) id<IESServiceProvider> dependencyProvider;
@property (nonatomic) BOOL disableLandingToOtherMode;
@property (nonatomic) long long rejectAuthCount;
@property (retain, nonatomic) NSNumber *landingMode;
@property (nonatomic) BOOL needRemindToAuthAlbum;
@property (nonatomic) long long authStatusVersion;
@property (retain, nonatomic) id waitRedPackTheme;
@property (copy, nonatomic) id /* block */ authCompletion;
@property (nonatomic) BOOL creatingCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)noPassCameraAuthWithCheckRequired:(id)a0;
+ (BOOL)mustHaveAuthScene:(id)a0 serviceProvider:(id)a1;
+ (BOOL)noPassMicAuthWithCheckRequired:(id)a0 ignoreAuthNeed:(BOOL)a1 creationModel:(id)a2 serviceProvider:(id)a3;
+ (BOOL)passAuthWithCheckRequired:(id)a0 creationModel:(id)a1 serviceProvider:(id)a2;

- (void)trackPermissionLayerState:(BOOL)a0;
- (void)switchStreamConfigIfNeed;
- (BOOL)passAuthWithCheckRequired:(id)a0;
- (void)showAuthViewIfNeededWithAuthStatus:(id)a0 authFinishBlock:(id /* block */)a1;
- (void)switchModeServiceWillCheckAuthorityWithMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceCheckAuthorityWithMode:(id)a0 oldMode:(id)a1 completion:(id /* block */)a2;
- (BOOL)passedMicAuth;
- (void)updateAuthStatusOfOldAuthService;
- (void)_checkAuthorityWithAuthStatus:(id)a0 completion:(id /* block */)a1;
- (void)_buildCameraWithAuthStatus:(id)a0 completion:(id /* block */)a1;
- (void)_sendPassAuthIfNeededWithWithAuthStatus:(id)a0;
- (void)_landingToModeIfNeededWithAuthStatus:(id)a0;
- (void)_switchToPhotoCameraMode;
- (void)_defaultLandingWithNoCameraAndNoAlbum;
- (void)_switchToTextMode;
- (void)setupAuthorityView;
- (BOOL)innerClose;
- (BOOL)mustHaveMicAuthScene;
- (void)remindToAuthAlbum:(BOOL)a0;
- (void)changeAuthForRedPackTheme:(id)a0 oldAuthService:(id)a1;
- (BOOL)isRedPackThemeRecording;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
