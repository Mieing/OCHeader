@class YataPopupManager, NSMutableDictionary, NSString, YataMainTreeManager, YataRenderState;
@protocol IESECSliceXInstanceInterface;

@interface YataRenderDispatcher : YataModule <UIScrollViewDelegate, YataSubscriber>

@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (weak, nonatomic) YataRenderState *renderState;
@property (retain, nonatomic) YataMainTreeManager *mainTreeManager;
@property (retain, nonatomic) YataPopupManager *popupManager;
@property (readonly, nonatomic) NSMutableDictionary *renderDelegateDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popupViewWithPopupCode:(id)a0 position:(id)a1;
- (void)performSectionUpdatesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateYataSection;
- (void)clearBodySectionData;
- (id)initWithYataInstance:(id)a0;
- (id)renderDelegateWithRenderNode:(id)a0;
- (void)setupMainTreeWithBody:(id)a0;
- (void)setupSliceXInstance;
- (void)setupMainTreeLinearController:(id)a0 shouldSkipRender:(BOOL)a1 containerView:(id)a2;
- (void)updateMainTreeLinearContainerPosition:(id)a0 shouldSkipRender:(BOOL)a1 containerView:(id)a2;
- (void)registerMainTreeSectionViewModels:(id)a0;
- (void)reloadMainTreeSectionObject:(id)a0 isBodyError:(BOOL)a1;
- (id)mainTreeControllerWithPosition:(id)a0;
- (id)popupStackTopElementKey;
- (void)updateMainTreeContainerPosition:(id)a0 completion:(id /* block */)a1;
- (id)sectionControllerForMainTreeSection:(long long)a0;
- (id)popupElementNodeKeyForCode:(id)a0;
- (id)currentPopupElementNodeKeys;
- (void)setupRootsManager;
- (void)setupMainTreeController:(id)a0 containerView:(id)a1;
- (id)mainTreeContainerControllerForType:(id)a0;
- (unsigned long long)viewRenderTypeWithRenderNode:(id)a0;
- (void)updateState:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
