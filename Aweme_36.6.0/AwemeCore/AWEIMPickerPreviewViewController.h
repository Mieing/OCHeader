@class AWEIMComponentContext, UICollectionView, NSString, AWEIMPickerPreivewConfigration;

@interface AWEIMPickerPreviewViewController : AWEIMComponentViewController <AWEZoomTransitionInnerContextProvider, AWEIMComponentManagerDependency, AWEIMMediaDetailTransitionInnerContextProvider>

@property (retain, nonatomic) AWEIMPickerPreivewConfigration *configuration;
@property (retain, nonatomic) AWEIMComponentContext *componentContext;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionWantsOptAnimation;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (id)zoomTransitionEndView;
- (id)componentsNameArrayWithContext:(id)a0;
- (double)mediaDetailTransitionAnimationDuration;
- (long long)currentSelectIndex;
- (BOOL)isWrapperByContainerVC;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)loadView;

@end
