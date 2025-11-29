@class UIWindow, NSString, NSNumber, UIViewController;
@protocol RxInjector, RTVXRSettingsInterface, RTVWindowProtocol, RTVVoipConfigureManagerInterface, RTVXRContextInterface, RTVSettingsManager, RTVXRRoomModelInterface, RTVXRMainViewController;

@interface __RTVXRPresenter : NSObject <RTVXRPresenterInterface, RTVXRStatesInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (retain, nonatomic) id<RTVXRRoomModelInterface> roomModel;
@property (retain, nonatomic) id<RTVXRContextInterface> context;
@property (retain, nonatomic) UIViewController<RTVXRMainViewController> *preloadXRViewController;
@property (retain, nonatomic) UIWindow<RTVWindowProtocol> *window;
@property (retain, nonatomic) NSNumber *originWindowLevel;
@property (readonly, weak, nonatomic) UIViewController<RTVXRMainViewController> *xrViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (BOOL)isSwitchLayoutAnimating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentNarrowViewFrame;
- (void)preloadEngine;
- (void)rtvWindowNeedHide:(BOOL)a0 needUpgradeWindowLevel:(BOOL)a1;
- (BOOL)isNarrowVisible;
- (BOOL)switchToFullScreenIfNeeded;
- (void)finishPreloadEngine;
- (id)presentForNewWindow;
- (id)__presentForNewWindow;
- (void)__configureKeyWindow:(BOOL)a0;
- (void)__clearParams;
- (id)dismiss;
- (void).cxx_destruct;
- (BOOL)viewIsVisible;

@end
