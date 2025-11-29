@interface EditImageUtil : MMObject

+ (BOOL)editImageUndoRedoSwitchOn;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCenterFrameWithAspectRatio:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)adjustView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (void)savePhotoToSystemAlbum:(id)a0;
+ (void)savePhotoToSystemAlbum:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)isNeedSaveEditedPhoto;
+ (double)getNearByInt:(double)a0;
+ (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
+ (struct CGSize { double x0; double x1; })getEditImageResultSizeIfLongImage:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isLongPressEntrance:(unsigned int)a0;
+ (BOOL)isCropOnlyScene:(unsigned int)a0;
+ (unsigned long long)convertImagePickerSceneToEditImageScene:(int)a0;
+ (unsigned long long)pickerEditImageUIStyle:(int)a0;
+ (BOOL)isCurrentCaptureViewToEditImageUIStyleModern:(unsigned long long)a0;
+ (BOOL)isCurrentEditImageUIStyleModern:(unsigned long long)a0;
+ (BOOL)isEditViewFullScreen:(unsigned int)a0 editImageUIStyle:(unsigned long long)a1;
+ (BOOL)isCurrentEditEntranceFromTimeLine:(unsigned int)a0;
+ (BOOL)isCurrentEditEntranceFromStory:(unsigned int)a0;
+ (BOOL)isCurrentEditEntranceFromTimeLineAndGame:(unsigned int)a0;
+ (BOOL)isCurrentEditEntranceFromFinder:(unsigned int)a0;
+ (BOOL)isPreviewScaleAspectToFill:(id)a0 entranceType:(unsigned int)a1;
+ (id)cropImageAccordingWithImage:(id)a0;
+ (id)createBlurImageWithOriginalImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)genPreviewImageWithAsset:(id)a0 atTime:(double)a1;
+ (id)getPrimaryColorForEntranceType:(unsigned long long)a0;
+ (id)getPrimaryColorForFromScene:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })adjustRenderSize:(struct CGSize { double x0; double x1; })a0;
+ (id)dictionaryWithGPSInfoString:(id)a0;
+ (struct CGSize { double x0; double x1; })getAVAssetSizeWithAVAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameWithAVAsset:(id)a0 baseSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameWithImage:(id)a0 baseSize:(struct CGSize { double x0; double x1; })a1 maxImageSizeRatio:(double)a2;

@end
