@class NSString, YataRunLoopTask, YataBodySectionViewModel, YataContainerViewSource, NSMutableArray, UICollectionView;
@protocol YataInstanceInnerInterface;

@interface YataBodyBindingSectionController : IGListBindingSectionController <IGListBindingSectionControllerDataSource, YataListSectionController, YataBodySectionProtocol>

@property (retain, nonatomic) YataBodySectionViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *registerCellIdentifiers;
@property (retain, nonatomic) NSMutableArray *changedViewSizeArray;
@property (retain, nonatomic) YataRunLoopTask *runLoopTask;
@property (nonatomic) BOOL shouldReuseItem;
@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (weak, nonatomic) YataContainerViewSource *viewSource;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionController:(id)a0 viewModelsForObject:(id)a1;
- (id)sectionController:(id)a0 cellForViewModel:(id)a1 atIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })sectionController:(id)a0 sizeForViewModel:(id)a1 atIndex:(long long)a2;
- (id)initWithSectionViewModel:(id)a0;
- (void)invalidateLayoutForIndexPaths:(id)a0;
- (id)stableRender:(id)a0 withIndex:(long long)a1;
- (void)sizeUpdatedInvalidateLayout:(long long)a0;
- (void)triggerViewHolderWillAppearForCell:(id)a0 atIndex:(long long)a1;
- (void)triggerViewHolderEndDisplayingForCell:(id)a0 atIndex:(long long)a1;
- (void)changingAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
