@class YataRenderDispatcher, NSMutableDictionary, YataContainerViewSource, YataRenderState;
@protocol IESECSliceXInstanceInterface, YataInstanceInnerInterface;

@interface YataMainTreeManager : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (weak, nonatomic) YataRenderState *renderState;
@property (weak, nonatomic) YataRenderDispatcher *renderDispatcher;
@property (readonly, nonatomic) YataContainerViewSource *viewSource;
@property (readonly, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (readonly, nonatomic) NSMutableDictionary *renderDelegateDict;

- (void)registerSectionViewModels:(id)a0;
- (void)reloadSectionObject:(id)a0 isBodyError:(BOOL)a1;
- (void)performSectionUpdatesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateYataSection;
- (void)clearBodySectionData;
- (id)containerControllerForType:(id)a0;
- (void)setAnchorRenderNodeToBodyController:(id)a0;
- (id)initWithYataInstance:(id)a0 renderDispatcher:(id)a1;
- (void)updateWithMainRoot:(id)a0 metricsID:(id)a1 updateCompletion:(id /* block */)a2;
- (void)setupContainerController:(id)a0 shouldSkipRender:(BOOL)a1 containerView:(id)a2;
- (void)updateLinearContainerPosition:(id)a0 shouldSkipRender:(BOOL)a1 containerView:(id)a2;
- (void)updateContainerPosition:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)sectionControllerForSection:(long long)a0;

@end
