@class NSArray, MJShootFilterItem;

@interface MJShootFilterInspectorViewModel : MJShootEffectMaterialViewModel

@property (retain, nonatomic) NSArray *titleItems;
@property (retain, nonatomic) NSArray *filterItems;
@property (retain, nonatomic) MJShootFilterItem *selectedFilterItem;

+ (id)defaultItems;

- (void)fetchFilterDataIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchFilterDataWithCompletion:(id /* block */)a0;
- (id)selectedTitleIndexPath;
- (id)selectedFilterItemIndexPath;
- (void)resetSelectionToNone;
- (void)didSelectFilterItem:(id)a0;
- (void)adjustingFilterOnItemValueChanged:(id)a0;
- (void)refetchFilterDataWithCompletion:(id /* block */)a0;
- (void)restoreFilterEffectWithCompletion:(id /* block */)a0;
- (void)refetchAndRestoreFilterEffectWithCompletion:(id /* block */)a0;
- (void)restoreFilterEffectInnerWithCompletion:(id /* block */)a0;
- (void)loadMaterialWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanFilterData;
- (void)updateCamEffectWithFilterItem:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
