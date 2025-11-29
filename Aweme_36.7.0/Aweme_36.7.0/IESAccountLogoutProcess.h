@class TTAccountLogoutInput, DYLastLoginUserModel, DYAAccountModel;

@interface IESAccountLogoutProcess : NSObject

@property (retain, nonatomic) DYAAccountModel *currentUser;
@property (retain, nonatomic) DYLastLoginUserModel *lastLoginUser;
@property (retain, nonatomic) TTAccountLogoutInput *logoutInput;
@property (nonatomic) BOOL isShowAlerting;

+ (Class)aAWEUserModuleConfigCommonClass;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (id)sharedInstance;

- (void)handleLostConnectionMessageWithDictionary:(id)a0;
- (id)aAWEUserModuleConfigCommon;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)logoutCurrentUserWithScene:(long long)a0 extraParams:(id)a1;
- (void)addSnapWindow:(id /* block */)a0;
- (void)startLoginAfterKickReason:(id)a0 resultCompletion:(id /* block */)a1;
- (void)removeSnapWindow:(id)a0 lastWindow:(id)a1 callback:(id /* block */)a2;
- (void)logoutWillStart:(id /* block */)a0 input:(id)a1;
- (void)logoutDidFinished:(id)a0;
- (void)showLogoutLoading;
- (void)afterLogoutWithResult:(id)a0 nextAccount:(id)a1 ticket:(id)a2;
- (void)hideLogoutLoading;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 showLoginBtn:(BOOL)a2 action:(id)a3 clickBlock:(id /* block */)a4;
- (void)processLandscapeWithCompletion:(id /* block */)a0;
- (void)accountsdk:(id)a0 showKickAlertWithTitle:(id)a1 message:(id)a2 showLoginBtn:(BOOL)a3 action:(id)a4;
- (void).cxx_destruct;

@end
