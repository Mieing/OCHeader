@class NSString, AWERLComponent2, AWERLVirtualView, UIView, NSMutableArray;
@protocol AWERLComponentContainerDelegate;

@interface AWERLComponentContainer : NSObject <AWEProfileHeaderComponentWidthAdaptionProtocol, AWERLComponent2Delegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWERLComponent2 *rootComponent;
@property (retain, nonatomic) AWERLVirtualView *rootVirtualView;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (nonatomic) struct CGSize { double width; double height; } lastConstraintSize;
@property (retain, nonatomic) UIView *lastContainerView;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) NSMutableArray *updateRequestQueue;
@property (nonatomic) long long updateTicket;
@property (nonatomic) BOOL quickUpdate;
@property (weak, nonatomic) id<AWERLComponentContainerDelegate> delegate;
@property (readonly, nonatomic) UIView *mountedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitAllComponentsWithBlock:(id /* block */)a0;
- (void)layoutWithMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)renderWithView:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (void)forceRenderWithView:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (void)markDetached;
- (id)initWithRootComponent:(id)a0;
- (id)queryComponentWithProtocol:(id)a0;
- (void)willRender;
- (void)updateContainerWidth:(double)a0;
- (void)debugHierarchyVirtualViewDescriptions;
- (void)debugHierarchyLayoutDescription;
- (void)onComponentNeedsUpdate:(id)a0;
- (id)initWithRootComponent:(id)a0 delegate:(id)a1;
- (void)willBuildComponents;
- (void)didBuildComponents;
- (void)forceLayoutWithMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)willBuildVirtualView;
- (void)didBuildVirtualView;
- (void)willLayout:(struct CGSize { double x0; double x1; })a0;
- (void)didLayout:(struct CGSize { double x0; double x1; })a0;
- (void)__render:(id)a0 container:(id)a1 animation:(id)a2;
- (id)queryComponentWithName:(id)a0;
- (void)debugHierarchyComponentDescriptions;
- (void)debug_onMultiTapped;
- (void)setNeedsUpdate;
- (id)allComponents;
- (void).cxx_destruct;
- (void)didUpdate;
- (void)willUpdate;
- (void)updateIfNeeded:(long long)a0;
- (void)buildComponents;
- (void)didRender;

@end
