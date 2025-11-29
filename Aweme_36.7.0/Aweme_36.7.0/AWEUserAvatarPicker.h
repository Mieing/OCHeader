@interface AWEUserAvatarPicker : AWEPhotoPicker

+ (id)sharedInstance;

- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (id)init;
- (void)reset;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
