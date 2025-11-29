@class NSString, NSNumber;

@interface ACCRecordViewController : ACCViewController <MiniComposerFinishHandlerDataSource, ACCCameraLifeCircleEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *enableOptimizeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraDidStartRender:(id)a0;
- (id)initWithBusinessConfiguration:(id)a0;
- (BOOL)enableFirstRenderOptimize;
- (void)prepareForLoadComponent;
- (void)beforeLoadLazyComponent;
- (id)creatComponentManager;
- (void)prepareForStatusBarOrientationDidChange;
- (id)composer_currentController;
- (void)registerByteBenchFeature;
- (BOOL)enableOptimizeArchPerformance;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
