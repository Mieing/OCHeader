@class NSArray, NSIndexPath, MJShootVisageInspectorItem;

@interface MJShootFaceEffectInspectorViewModel : MJShootEffectMaterialViewModel

@property (retain, nonatomic) NSArray *faceEffectItems;
@property (retain, nonatomic) MJShootVisageInspectorItem *selectedFaceEffectItem;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

+ (id)defaultFaceEffectItems;

- (void)fetchFaceEffectDataIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchFaceEffectDataWithCompletion:(id /* block */)a0;
- (void)refetchFaceEffectDataWithCompletion:(id /* block */)a0;
- (void)restoreFaceEffectWithCompletion:(id /* block */)a0;
- (void)refetchAndRestoreFaceEffectWithCompletion:(id /* block */)a0;
- (void)restoreFaceEffectInnerWithCompletion:(id /* block */)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)a0;
- (void)handleSelectItemAtIndexPath:(id)a0;
- (void)updateFaceEffectWithItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetSelectionToNone;
- (void).cxx_destruct;

@end
