@class NSString;

@interface IESIMMediaService : HTSService <IESIMMediaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 cropingStyle:(unsigned long long)a5 coverMaskImage:(id)a6 aspectRato:(struct CGSize { double x0; double x1; })a7 otherActions:(id)a8 selectedBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)pickPhotoInPhotoLibraryFromSource:(id)a0 editorType:(unsigned long long)a1 cropingStyle:(unsigned long long)a2 aspectRato:(struct CGSize { double x0; double x1; })a3 selectedBlock:(id /* block */)a4 dismissedBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (unsigned long long)p_awePhotoPickerSourceWithIESIMSource:(unsigned long long)a0;
- (unsigned long long)p_awePhotoPickerEditorTypeWithIESIMEditorType:(unsigned long long)a0;
- (unsigned long long)p_awePhotoPickerEditorCropingStyleWithIESIMStyle:(unsigned long long)a0;
- (unsigned long long)p_iesimPhotoPickerSourceWithAWESource:(unsigned long long)a0;

@end
