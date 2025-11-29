@class DUXLoadingToast, NSMutableDictionary, AWERouteTransitionInfo, NSString, AWEUserModel, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEAccountSwitchTaskHandler : NSObject <IESIMLoginManagerMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *imLoginSem;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) NSMutableDictionary *monitorParams;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) AWERouteTransitionInfo *transitionInfo;
@property (nonatomic) BOOL isHandling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aDYAVCDServiceCommonAdapterClass;
+ (id)switchAccountFailedToast;
+ (id)switchVCDAccount:(id)a0;
+ (id)sharedInstance;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)mainAppWindow;
- (id)getVCDAccount;
- (id)aDYAVCDServiceCommonAdapter;
- (void)preProcessContext;
- (void)trackClickMultiAccountPushIfNeed;
- (BOOL)checkShouldForbiddenSwitchAccount;
- (void)transferWithCompletion:(id /* block */)a0;
- (void)switchAccountTo:(id)a0 withCompletion:(id /* block */)a1;
- (void)tryLandingToMessageTabWithCompletion:(id /* block */)a0;
- (id)leadingPathFromURL:(id)a0;
- (void)trackAccountSwitchFailed:(id)a0;
- (void)trackMultiAccountSwitch;
- (void)switchVCDAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)trackVCDSwitchSubmit;
- (void)trackVCDSwitchResult:(id)a0;
- (double)imLoginTimeout;
- (id)routerMap;
- (void)transferToImWithCompletion:(id /* block */)a0;
- (void)transferToNotificationWithCompletion:(id /* block */)a0;
- (void)trackEnterGroupChat;
- (void)trackEnterSingleChat;
- (void)trackEnterNotificationNotice;
- (BOOL)tryRemoveOtherWindowAndMaskView;
- (BOOL)isInMessageTab;
- (id)getViewIdentifier:(id)a0;
- (BOOL)canRemoveView:(id)a0;
- (BOOL)canRetainView:(id)a0;
- (id)getWindowCheckObjects:(id)a0;
- (BOOL)canRemoveWindow:(id)a0;
- (BOOL)canRetainWindow:(id)a0;
- (id)allowedRetainedViews;
- (id)canRemovedViews;
- (id)allowedRetainedWindows;
- (id)canRemovedWindows;
- (void)handleWithCompletion:(id /* block */)a0;
- (void)monitorInterruptSwitchAccount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
