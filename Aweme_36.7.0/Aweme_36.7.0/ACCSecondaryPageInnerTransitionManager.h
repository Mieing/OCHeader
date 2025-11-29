@class NSString, UIImageView, UIView, NSObject, UIViewController;
@protocol ACCSecondaryPageLayoutManager, ACCFPPageContextProtocol, ACCSecondaryPageInputData, ACCSecondaryPageService, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol, AWEStudioAIMateEditFeaturePublicAPI, ACCSecondaryPageViewController, IESServiceProvider;

@interface ACCSecondaryPageInnerTransitionManager : NSObject <ACCSecondaryPageInnerTransitionManager>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (weak, nonatomic) NSObject<ACCFPPageContextProtocol> *fpContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) UIViewController<ACCSecondaryPageViewController> *viewController;
@property (weak, nonatomic) id<ACCSecondaryPageInputData> inputData;
@property (weak, nonatomic) id<ACCSecondaryPageLayoutManager> layoutManager;
@property (weak, nonatomic) id<ACCSecondaryPageService> secondaryPageService;
@property (weak, nonatomic) id<AWEStudioAIMateEditFeaturePublicAPI> aiMateEditFeatureAPI;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) struct CGPoint { double x; double y; } playerOrigin;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL transitionDone;
@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) BOOL hasActiveKeyboard;
@property (retain, nonatomic) UIImageView *editViewContainerImageView;
@property (retain, nonatomic) UIView *capsuleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 fpContext:(id)a1;
- (void)doSnapshot;
- (void)doSnapshotWithCompletion:(id /* block */)a0;
- (void)showSnapshotOnScreen;
- (void)startZoomInAnimationWithBottomHeight:(double)a0 duration:(double)a1 animationOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)startZoomOutAnimationWithDuration:(double)a0 animationOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)enableTransitionDone:(BOOL)a0;
- (void)startZoomInAnimationWithAnimationConfig:(id)a0 completion:(id /* block */)a1;
- (void)prepareZoomOutWithAnimationConfig:(id)a0;
- (void)startZoomOutAnimationWithAnimationConfig:(id)a0 completion:(id /* block */)a1;
- (void)updateSnapForAIEditIfNeeded;
- (void)activeKeyboardIfNeeded;
- (id)updateLayoutWithAnimationConfig:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignCenterWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)rectWithSmallContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snapshotSmallFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewDidAppear;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
