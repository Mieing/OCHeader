@class NSString, NSMutableArray;

@interface MMMusicPostAssetPickerHandler : NSObject <MMMusicPostVideoVCDataSource, MMMusicPostVideoDelegate>

@property (retain, nonatomic) NSMutableArray *selectedModels;
@property (copy, nonatomic) id /* block */ onSelectedAssetChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSelectedModels;
- (id)getSelectedArr;
- (void)onSelectLocalVideoAsset:(id)a0 thumbImage:(id)a1 thumbFrameInVC:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onTabFinderSearch:(id)a0;
- (void)onSelectFinderVideo:(id)a0 thumbImage:(id)a1 cellFrameInVC:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onPostVideoShortVideoTaken:(id)a0 localIdentifier:(id)a1 thumbImg:(id)a2 editVideoAttr:(id)a3 paramModel:(id)a4;
- (BOOL)addOrRemoveSelectedModel:(id)a0;
- (BOOL)addOrRemoveSelectedModel:(id)a0 addHandler:(id /* block */)a1 removeHandler:(id /* block */)a2;
- (void)postVideoViewController:(id)a0 onLocalVideoAssetSelectedBtnChecked:(id)a1;
- (void)postVideoViewController:(id)a0 onFinderVideoSelectedBtnChecked:(id)a1;
- (void).cxx_destruct;

@end
