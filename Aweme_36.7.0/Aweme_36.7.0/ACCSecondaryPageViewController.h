@class ACCSecondaryPageService, ACCSecondaryPageInputData, ACCSecondaryPageRestoreService, IESContainer, ACCSecondaryPageInnerTransitionManager, NSString, ACCSecondaryPageComponentManager, NSObject, ACCSecondaryPageLayoutManager;
@protocol ACCFPPageContextProtocol;

@interface ACCSecondaryPageViewController : UIViewController <ACCSecondaryPageViewController, AWEMediaSmallAnimationProtocol>

@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) ACCSecondaryPageInputData *inputData;
@property (retain, nonatomic) ACCSecondaryPageComponentManager *componentManager;
@property (retain, nonatomic) ACCSecondaryPageLayoutManager *layoutManager;
@property (retain, nonatomic) ACCSecondaryPageInnerTransitionManager *transitionManager;
@property (retain, nonatomic) ACCSecondaryPageService *secondaryPageService;
@property (retain, nonatomic) ACCSecondaryPageRestoreService *restoreService;
@property (retain, nonatomic) NSObject<ACCFPPageContextProtocol> *fpSwiftPageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithInputData:(id)a0;

- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigPlayerFrame;
- (double)mediaSmallMediaContainerCornerRadius;
- (id)snapAboveView;
- (id)smallMediaSnapshotView;
- (BOOL)enableTopViewAnimation;
- (id)mediaSmallTopView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallTopViewFrame;
- (BOOL)shouldBottomViewUseSnap;
- (id)initWithSecondaryPageInputData:(id)a0;
- (void)configPageServiceContainer:(id)a0;
- (id)transitionMediaSnap;
- (id)simpleTransitionMediaSnap;
- (id)transitionSnapContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
