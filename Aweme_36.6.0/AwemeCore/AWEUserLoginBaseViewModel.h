@class NSDictionary, UIViewController, NSString;

@interface AWEUserLoginBaseViewModel : NSObject <AWEUserLoginDataControllerDelegate>

@property (nonatomic) unsigned long long loginStyle;
@property (nonatomic) long long loginRequestStatus;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isShowingPrivacy;
@property (nonatomic) BOOL hasAgreedPrivacy;
@property (nonatomic) unsigned long long jumpNextLoginType;
@property (nonatomic) BOOL isAmbientHeadViewShown;
@property (nonatomic) BOOL needRemoveBackgroundColor;
@property (retain, nonatomic) NSDictionary *loginComponentDict;
@property (nonatomic) long long navigationBarAction;
@property (nonatomic) unsigned long long backStrategy;
@property (retain, nonatomic) UIViewController *nextPushVC;
@property (nonatomic) unsigned long long thirdLoginSheetShowState;
@property (nonatomic) BOOL viewUserInteractionDisable;
@property (readonly, nonatomic) NSString *monitorPageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)updateNavigationStatusWithViewController:(id)a0;
- (void)trackLoginEvent:(long long)a0 error:(id)a1;
- (id)getComponentWithType:(unsigned long long)a0;
- (void)checkConfirmedProtocolWithCompletion:(id /* block */)a0;
- (id)getComponentViewWithType:(unsigned long long)a0;
- (void)updateNextPushVC:(id)a0;
- (void)updateAmbientHeadViewShown:(BOOL)a0;
- (void)dataControllerTrackLoginEvent:(long long)a0;
- (void)dataControllerTrackLoginEvent:(long long)a0 error:(id)a1;
- (void)dataControllerUpdateLoginRequestStatus:(long long)a0;
- (void)dataControllerUpdateNextPushVC:(id)a0;
- (void)trackLoginEvent:(long long)a0;
- (void)updateLoginRequestStatus:(long long)a0;
- (void)createLoginComponentDict;
- (id)notifyTrackLoginSuggestMethod;
- (void)updateIsLoading:(BOOL)a0;
- (void)updateJumpNextLoginType:(unsigned long long)a0;
- (void)trackPageShowPerfEvent;
- (void)requestLoginAfterDetainAlert;
- (void)updateNeedRemoveBackgroundColor:(BOOL)a0;
- (id)loginComponentTypeList;
- (id)showLoginPlatformList;
- (void)dataControllerUpdateViewUserInteractionEnabled:(BOOL)a0;
- (id)initWithLoginPanelStyle:(unsigned long long)a0;
- (void)sendNavigationBarAction:(long long)a0;
- (void)updateIsShowingPrivacy:(BOOL)a0;
- (void)updateLoginStyle:(unsigned long long)a0;
- (void)updateHasAgreedPrivacy:(BOOL)a0;
- (void)updateThirdLoginSheetShowState:(unsigned long long)a0;
- (void)updateLoginComponentDict:(id)a0;
- (void)requestLogin;
- (void)requestLoginWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)trackInfo;

@end
