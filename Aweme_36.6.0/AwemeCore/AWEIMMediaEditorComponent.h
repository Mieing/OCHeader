@class PHAsset, NSString;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMMediaEditorComponent : AWEIMComponentBase <AWEIMMediaEditorInterface>

@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (retain, nonatomic) PHAsset *assetToEdit;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)jumpToEditPage:(long long)a0 context:(id)a1;
- (id)p_imModelForAsset:(id)a0;
- (id)p_sourceModelForAsset:(id)a0;
- (void)p_onReceiveEditedMediaWithPath:(id)a0 userInfo:(id)a1;
- (void)p_onEditDismiss;
- (void).cxx_destruct;

@end
