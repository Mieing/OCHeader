@class NSString, AWEElementContainer, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPadLeftElementContainerProvider : AWEPadElementContainerProvider <AWELeftElementContainerProvider> {
    AWEElementContainer *_container;
}

@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)updateLayoutForVerticalIfNeeded;
- (id)exceptElements;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)a0;
- (void)layout;
- (double)rightMargin;
- (void)rebuild;

@end
