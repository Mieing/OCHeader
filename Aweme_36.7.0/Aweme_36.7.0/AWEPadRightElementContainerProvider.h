@class NSString, AWEElementContainer, AWEPadRightElementLayout, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPadRightElementContainerProvider : AWEPadElementContainerProvider <AWERightElementContainerProvider> {
    AWEElementContainer *_container;
}

@property (retain, nonatomic) AWEPadRightElementLayout *containerLayout;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)duxGrid_viewSizeDidChangeToBreakPoint:(struct { long long x0; long long x1; })a0;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)a0;
- (void)layout;

@end
