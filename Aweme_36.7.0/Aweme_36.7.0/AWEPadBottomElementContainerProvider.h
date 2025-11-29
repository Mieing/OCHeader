@class NSString, AWEElementContainer, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPadBottomElementContainerProvider : AWEPadElementContainerProvider <AWEBottomElementContainerProvider> {
    AWEElementContainer *_container;
}

@property (nonatomic) BOOL hasUpdateElementsHidden;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)initWithViewController:(id)a0 context:(id)a1;
- (double)p_stackContainerViewBottomOffset;
- (BOOL)shouldAdjustFullScreenCellDisplay;
- (void)addBinding;
- (void)updateLayoutForVerticalIfNeeded;
- (BOOL)canUpdateElementsHidden;
- (id)container;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setContainer:(id)a0;
- (void)layout;
- (id)containerView;
- (void)rebuild;

@end
