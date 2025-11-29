@interface AWEMusicPlaylistCoverPicker : AWEPhotoPicker

+ (id)sharedInstance;

- (void)showImagePicker:(long long)a0 enableCrop:(BOOL)a1;
- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 editorType:(unsigned long long)a3 cropingStyle:(unsigned long long)a4 coverMaskImage:(id)a5 aspectRato:(struct CGSize { double x0; double x1; })a6 otherActions:(id)a7 selectedBlock:(id /* block */)a8 completionBlock:(id /* block */)a9;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
