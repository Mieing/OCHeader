@class AWEIMFlexComponent, NSString, AWEIMFlexPresenter, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore, AWEIMFlexComponentRenderHolder, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMFlexCellTemplateProtocol;

@interface AWEIMFlexRendererYoga : NSObject <AWEIMFlexRenderer>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) id<AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMFlexComponentRenderHolder> rootComponent;
@property (weak, nonatomic) AWEIMFlexComponent<AWEIMFlexCellTemplateProtocol> *templateComponent;
@property (retain, nonatomic) NSMutableArray *currentDisplayViews;
@property (nonatomic) long long renderDeep;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL isDirty;
@property (nonatomic) BOOL enableNextRenderWithAnimtaion;
@property (weak, nonatomic) AWEIMFlexPresenter *reloadTargetPresenter;
@property (nonatomic) BOOL enableRecycleOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct YGConfig { } *)globalConfig;

- (id)initWithRootComponent:(id)a0;
- (void)p_insertView:(id)a0 toSuperView:(id)a1;
- (void)renderInCell:(id)a0;
- (id)createPresenterView:(id)a0 inCell:(id)a1;
- (void)p_calculateLayout;
- (struct YGNode { } *)p_makeYGNode:(id)a0 parentNode:(struct YGNode { } *)a1;
- (void)p_syncLayout:(id)a0 fromNode:(struct YGNode { } *)a1;
- (void)p_arrangement:(id)a0 inContainerView:(id)a1 inCell:(id)a2 deep:(long long)a3;
- (void)p_clearDirtyViewsInCell:(id)a0 deep:(long long)a1;
- (id)p_findOrCreateView:(id)a0 inContainerView:(id)a1 inCell:(id)a2;
- (id)p_findTargetSuperView:(id)a0 inContainerView:(id)a1 inCell:(id)a2;
- (void).cxx_destruct;
- (void)calculateLayout;

@end
