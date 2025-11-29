@class UIStackView, NSMutableDictionary, NSOrderedSet, NSString, UIView;
@protocol RTVSessionPreviewProcotol, RxInjector, RTVInteractionPreviewContainerConfigurator, RTVXRStateRecorder, RTVXRControllerInjector, RTVInteractionPreviewListViewDelegate, RTVXRInteractionController, RTVInteractionConfigureManagerInterface, RTVSettingsManager, RTVInteractionPreviewListViewLayoutDelegate, RTVInteractionController;

@interface RTVInteractionPreviewListView : UIView <RTVXRControllerInterface, UIGestureRecognizerDelegate, RTVInteractionControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerConfigurator> previewContainerConfigure;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrInteractionController;
@property (readonly, weak, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (nonatomic) double previewPresentationHeight;
@property (nonatomic) double previewPresentationSpacing;
@property (readonly, nonatomic) NSMutableDictionary *currentPreviewControllers;
@property (retain, nonatomic) NSOrderedSet *currentPreviewItems;
@property (copy, nonatomic) NSString *highlightPreviewIdentifier;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL needBackground;
@property (weak, nonatomic) id<RTVInteractionPreviewListViewDelegate> delegate;
@property (weak, nonatomic) id<RTVInteractionPreviewListViewLayoutDelegate> layoutDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__configComponents;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)updateLayoutWithContentHeight:(double)a0;
- (double)minPreviewHeight;
- (id)previewControllersSnapshot;
- (void)beginPinchGesture;
- (void)endPinchGesture;
- (void)highlightPreviewView:(id)a0 withAnimation:(id /* block */)a1;
- (void)unHighlightPreviewViewWithAnimation:(id /* block */)a0;
- (unsigned long long)__previewStyle;
- (void)refreshWithItems:(id)a0 animated:(BOOL)a1;
- (void)__updatePreviewPresentationHeightAndSpaingWithRequiredPreviewHeight:(double)a0;
- (void)__refreshCurrentPreviews;
- (id)__generatePreviewViewWithPreviewItem:(id)a0;
- (void)__resetPreviewPresentationHeightAndSpacing;
- (void)__refreshComponentsWithPreviewRemovals:(id)a0 previewInsertions:(id)a1 animated:(BOOL)a2;
- (double)__calculatePreviewInitialHeightForMultiplePreviews:(unsigned long long)a0;
- (id)__generatePreviewViewWithParticipantViewModel:(id)a0;
- (id)__generatePlaceholderPreviewViewWithViewModel:(id)a0;
- (BOOL)__needCustomConstraintsForPreviewController:(id)a0;
- (double)__appropriateHeightBasedOnCacheAndBubbleDisplayingForPreviewViewIdentifier:(id)a0;
- (double)__referencePreviewHeight;
- (double)previewPreferredSpacing;
- (double)previewPreferredHeight;
- (double)previewPreferredHighlightHeight;
- (void)__configStackView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
