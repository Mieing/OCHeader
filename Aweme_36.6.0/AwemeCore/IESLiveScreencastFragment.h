@class NSString, IESLiveScreencastRestartHandler, UIView, IESLiveScreencastStore;

@interface IESLiveScreencastFragment : IESLiveRoomComponent <IESLiveScreencastRestartHandlerActionDelegate>

@property (retain, nonatomic) IESLiveScreencastStore *store;
@property (retain, nonatomic) IESLiveScreencastRestartHandler *restartHandler;
@property (retain, nonatomic) UIView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)bindXLiveObserveActions;
- (BOOL)screenshotRestartEnable;
- (void)showExtensionDisconnectedAlert;
- (id)getWebpLoadingView;
- (void)showScreencastRestartLoading:(BOOL)a0;
- (void).cxx_destruct;

@end
