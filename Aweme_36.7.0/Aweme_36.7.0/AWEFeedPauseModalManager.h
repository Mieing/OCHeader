@class UIViewController, AWEFeedPauseModalStyleManager, AWEFeedPauseModalStrategyManager, NSString, AWEShellControllerManager, AWEAwemePageContext;
@protocol AWEFeedContainerSafeWrapperProtocol, AWEAwemeFeedServiceBaseContainerProtocol, AWEFeedContainerServiceResolverProtocol, AWEAwemeFeedBaseControllerProtocol, AWEFeedPauseModalContextProtocol;

@interface AWEFeedPauseModalManager : AWEFeedContainerBaseService <AWEFeedPauseModalManagerProtocol>

@property (retain, nonatomic) AWEFeedPauseModalStyleManager *styleManager;
@property (retain, nonatomic) AWEFeedPauseModalStrategyManager *strategyManager;
@property (retain, nonatomic) id<AWEFeedPauseModalContextProtocol> pauseModalContext;
@property (nonatomic) long long containerType;
@property (weak, nonatomic) AWEShellControllerManager<AWEAwemeFeedBaseControllerProtocol> *containerControllerManager;
@property (weak, nonatomic) AWEAwemePageContext *context;
@property (weak, nonatomic) id<AWEFeedContainerServiceResolverProtocol> serviceResolver;
@property (weak, nonatomic) UIViewController<AWEAwemeFeedServiceBaseContainerProtocol> *container;
@property (weak, nonatomic) id<AWEFeedContainerSafeWrapperProtocol> containerWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;

- (void)hiddenBottomTabIfNeedWithModel:(id)a0;
- (void)showBottomTabIfNeedWithModel:(id)a0;
- (void)trackFalseTouchIfNeedWithAweme:(id)a0;
- (void)hiddenPauseModalWithModel:(id)a0 clickMethod:(id)a1;
- (void)createPauseModalViewWithModel:(id)a0;
- (void)showPauseModalWithModel:(id)a0 cellViewController:(id)a1;
- (void)deallocPauseModalViewWithModel:(id)a0 cellViewController:(id)a1 clickMethod:(id)a2;
- (void)setupWithConfig;
- (BOOL)shouldShowPauseModalIntro:(id)a0;
- (void).cxx_destruct;

@end
