@class UIViewController, NSString, UIView, HTSLivePopupContainer;
@protocol IESLiveHierarchyContainerView;

@interface HTSLive4LayerContainerView : UIView <HTSLiveViewHierarchyProvider>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (retain, nonatomic) UIView *fakePreview;
@property (retain, nonatomic) UIView *fakePreviewSuperView;
@property (nonatomic) BOOL isRemovingFakePreview;
@property (nonatomic) long long previewFakeViewLock;
@property (nonatomic) BOOL containerHidden;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) UIView *mediaContainer;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) HTSLivePopupContainer *popupContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *floatContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *operationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *animationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *multiTabContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *contentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *danmakuContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *diggAnimationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *mediaDecorationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *keyboardContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *clearScreenContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *landscapePreviewContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *pinchGestureContainer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
- (BOOL)touchAtEmptyPlace:(id)a0;
- (void)refreshLayout:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })popupContainerEdgeInsets;
- (void)addPreviewFakeView:(id)a0 superView:(id)a1;
- (void)removePreviewFakeView;
- (void)forceRemovePreviewFakeView;
- (void)lockPreviewFakeView:(long long)a0;
- (void)unlockPreviewFakeView:(long long)a0;
- (void)openMediaContainerSecureContent:(BOOL)a0;
- (void)setupReuseSubViews:(id)a0;
- (BOOL)isVSLandscapeToLandscapeEnable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (BOOL)shouldUseSideStyle;
- (id)initWithContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 diContext:(id)a1;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 containerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 diContext:(id)a2;
- (void)updateContainerHidden:(BOOL)a0 animateDuration:(double)a1;
- (void)updateWithScreenInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateWithContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 diContext:(id)a1;
- (void)landscapeSceneRefreshIfNeed;
- (void)p_removePreviewFakeView;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
