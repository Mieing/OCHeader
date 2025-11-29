@class NSString, AWETeenContentManageDataController;

@interface AWETeenContentPreferManager : NSObject <AWEUserMessage, BDXKitViewLifecycleProtocol, BDXHostNavigationProtocol, AWETeenProtectPasswordProtocol>

@property (retain, nonatomic) AWETeenContentManageDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)bdxPushViewController:(id)a0 animated:(BOOL)a1;
- (void)bdxPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_setup;
- (BOOL)isContentPreferOn;
- (void)updateDataWithStatus:(BOOL)a0;
- (void)fetchContentManageDataSource;
- (id)getContentManageLynxSurl;
- (void)p_popPasswordConfirmPage;
- (void)nextActionAfterConfirmPassword;
- (id)getAgeScopeText;
- (void)showContentManageConfirmPasswordPage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
