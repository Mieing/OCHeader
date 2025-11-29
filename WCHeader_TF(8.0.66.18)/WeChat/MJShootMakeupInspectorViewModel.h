@class NSArray, NSIndexPath, MJShootVisageInspectorItem;

@interface MJShootMakeupInspectorViewModel : MJShootEffectMaterialViewModel

@property (retain, nonatomic) NSArray *makeupItems;
@property (retain, nonatomic) MJShootVisageInspectorItem *selectedMakeupItem;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

+ (id)defaultMakeupItems;

- (void)fetchMakeupDataIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchMakeupDataWithCompletion:(id /* block */)a0;
- (void)refetchMakeupDataWithCompletion:(id /* block */)a0;
- (void)restoreMakeupWithCompletion:(id /* block */)a0;
- (void)refetchAndRestoreMakeupWithCompletion:(id /* block */)a0;
- (void)restoreMakeupInnerWithCompletion:(id /* block */)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)a0;
- (void)handleSelectItemAtIndexPath:(id)a0;
- (void)updateMakeupWithItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetSelectionToNone;
- (void).cxx_destruct;

@end
