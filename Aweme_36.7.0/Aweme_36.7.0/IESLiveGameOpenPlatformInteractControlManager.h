@class IESLivePopupItem, NSString, NSPointerArray, UIView, NSMutableArray, UIViewController;
@protocol IESLiveInternalRouter;

@interface IESLiveGameOpenPlatformInteractControlManager : NSObject <IESLiveGameOpenPlatformInteractControlManagerInterface>

@property (weak, nonatomic) UIView *currentAlertView;
@property (weak, nonatomic) UIViewController *currentAlertVC;
@property (retain, nonatomic) NSMutableArray *pendingInstantOperationList;
@property (retain, nonatomic) NSMutableArray *pendingTimeStopOperationList;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (nonatomic) BOOL pauseDisplayAlert;
@property (weak, nonatomic) IESLivePopupItem *alertItem;
@property (retain, nonatomic) NSPointerArray *scopeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)dealWithMessage:(id)a0;
- (void)dealWithSyncdata:(id)a0;
- (void)dealWithDictionary:(id)a0 appId:(id)a1;
- (void)dealWithOperation:(id)a0;
- (void)dealWithRealNameAlertWithAppId:(id)a0;
- (void)resumeAlert;
- (void)clearAuthViewWhenAppInstanceDestory:(id)a0;
- (void)showAuthView:(id)a0 scopeName:(id)a1 completion:(id /* block */)a2;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)dismissAddictionAlert;
- (void)p_restoreOperationFromList;
- (void)p_tryToShowAlertWithOperation:(id)a0;
- (void)p_realShowAlertWithOperation:(id)a0;
- (void)p_showLightAlertWithOperation:(id)a0;
- (void)p_showStrongAlertWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
