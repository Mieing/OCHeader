@class AWEProfileLynxLoadingView, NSString, UIView;
@protocol BDXContainerLifecycleProtocol, IESHYHybridViewLifecycleProtocol, HunterContainerLifeCycleProtocol;

@interface AWEProfileHybridContainerBaseWrapper : NSObject <AWEProfileHybridContainerProtocol>

@property (weak, nonatomic) UIView *targetView;
@property (copy, nonatomic) id /* block */ getViewModelCallBack;
@property (retain, nonatomic) AWEProfileLynxLoadingView *loadingView;
@property (retain, nonatomic) UIView *hybridView;
@property (nonatomic) double lastWidth;
@property (copy, nonatomic) id /* block */ containerIDConfiguredBlock;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol, IESHYHybridViewLifecycleProtocol> lynxContainerLifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)__getViewModel;
- (id)__configSchemaAddExtraParamsWithSourceSchema:(id)a0;
- (void)__configFinishWith:(id)a0;
- (void)configHybridViewWithContainerWidth:(double)a0;
- (id)findScrollViewWithName:(id)a0;
- (void)onThemeChangeNotificationAction:(id)a0;
- (void)hybridLayoutSubviewsWithContainerWidth:(double)a0 callBack:(id /* block */)a1;
- (void)updateLifeContainerDelegate:(id)a0;
- (void)resetBackOlderPlan;
- (void)changeHeight:(double)a0;
- (void)__configContext:(id)a0 schema:(id)a1 scrollViewHeight:(double)a2 containerWidth:(double)a3;
- (void).cxx_destruct;
- (void)stopLoading;

@end
