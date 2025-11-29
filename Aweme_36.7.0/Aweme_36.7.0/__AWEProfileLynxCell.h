@class AWEProfileLynxViewModel, AWEProfileLynxLoadingView, UIView, UIViewController;
@protocol IESHYHybridViewProtocol, AWEProfileHybridContainerProtocol, BDXViewContainerProtocol, HunterContainerProtocol, IESHYHybridViewLifecycleProtocol, BDXContainerProtocol, BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol;

@interface __AWEProfileLynxCell : UICollectionViewCell

@property (retain, nonatomic) AWEProfileLynxViewModel *viewModel;
@property (copy, nonatomic) id /* block */ containerIDConfiguredBlock;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *containerVC;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol, IESHYHybridViewProtocol> *lynxView;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *hunterView;
@property (retain, nonatomic) id<AWEProfileHybridContainerProtocol> profileHybridContainer;
@property (retain, nonatomic) AWEProfileLynxLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ childViewControllerCompleteBlock;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol, IESHYHybridViewLifecycleProtocol> lynxContainerLifeCycleDelegate;
@property (nonatomic) double lastWidth;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)identifier;

- (id)aAWEPadModuleAdapter;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)padService;
- (id)__configSchemaAddExtraParamsWithSourceSchema:(id)a0;
- (id)findScrollViewWithName:(id)a0;
- (void)onThemeChangeNotificationAction:(id)a0;
- (void)updateLifeContainerDelegate:(id)a0;
- (void)__configLynxView;
- (void)__configHunterView;
- (void)__configAnnieXView;
- (void)__configContext:(id)a0 schema:(id)a1 scrollViewHeight:(double)a2;
- (void)__confifgFinishWith:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupConfig;

@end
