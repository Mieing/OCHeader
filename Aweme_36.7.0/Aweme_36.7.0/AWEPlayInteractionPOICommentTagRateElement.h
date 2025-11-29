@class UIView, NSString, AWEPlayInteractionPOICommentTagRateElementViewModel;
@protocol BDXViewContainerProtocol;

@interface AWEPlayInteractionPOICommentTagRateElement : AWEPlayInteractionLeftElement <BDXContainerLifecycleProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionPOICommentTagRateElementViewModel *viewModel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double foldedHeight;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidFirstScreen:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setElementIsHide:(BOOL)a0;
- (void)p_animateOtherElementWithUnfold:(BOOL)a0 duration:(double)a1 delay:(double)a2;
- (void)p_changeLynxHierarchyWithUnfold:(BOOL)a0;
- (void)p_animateOtherElementWithUnfold:(BOOL)a0 duration:(double)a1;
- (void)p_animateFinished;
- (void)p_didTapWithUnfold:(BOOL)a0;
- (void)p_deleteTagElement;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
