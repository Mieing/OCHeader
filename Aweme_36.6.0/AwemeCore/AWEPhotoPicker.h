@class NSDictionary, NSString, TOCropViewController, UIImage, UIView, UIImagePickerController, CAKModalTransitionDelegate;

@interface AWEPhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, TOCropViewControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ extendedCompletionBlock;
@property (nonatomic) unsigned long long editorType;
@property (nonatomic) unsigned long long cropingStyle;
@property (nonatomic) struct CGSize { double width; double height; } cropRato;
@property (weak, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIImage *coverMaskImage;
@property (retain, nonatomic) TOCropViewController *cropViewController;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (weak, nonatomic) UIImagePickerController *imagePicker;
@property (nonatomic) unsigned long long selectedSource;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_defaultEditorType;
+ (id)sharedInstance;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (void)removeCurrentCropViewController;
- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 aspectRato:(struct CGSize { double x0; double x1; })a5 completionBlock:(id /* block */)a6;
- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 cropingStyle:(unsigned long long)a5 aspectRato:(struct CGSize { double x0; double x1; })a6 completionBlock:(id /* block */)a7;
- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 cropingStyle:(unsigned long long)a5 coverMaskImage:(id)a6 aspectRato:(struct CGSize { double x0; double x1; })a7 otherActions:(id)a8 selectedBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)pickPhotoAndVideoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 cropingStyle:(unsigned long long)a5 coverMaskImage:(id)a6 aspectRato:(struct CGSize { double x0; double x1; })a7 otherActions:(id)a8 selectedBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)pickPhotoAndVideoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 editorType:(unsigned long long)a4 cropingStyle:(unsigned long long)a5 coverMaskImage:(id)a6 aspectRato:(struct CGSize { double x0; double x1; })a7 otherActions:(id)a8 selectedBlock:(id /* block */)a9 cancelActionBlock:(id /* block */)a10 extendedCompletionBlock:(id /* block */)a11;
- (void)showAlertWithSourceType:(unsigned long long)a0;
- (void)showImagePicker:(long long)a0 enableCrop:(BOOL)a1;
- (void)didSelectWithSource:(unsigned long long)a0;
- (void)pickPhotoInPhotoLibraryFromSource:(id)a0 editorType:(unsigned long long)a1 cropingStyle:(unsigned long long)a2 coverMaskImage:(id)a3 aspectRato:(struct CGSize { double x0; double x1; })a4 selectedBlock:(id /* block */)a5 dismissedBlock:(id /* block */)a6 extendedCompletionBlock:(id /* block */)a7;
- (void)showTOCropVCWithStyle:(unsigned long long)a0 image:(id)a1 aspectRato:(struct CGSize { double x0; double x1; })a2 coverMaskImage:(id)a3 completionBlock:(id /* block */)a4;
- (long long)_tocropingStyle:(unsigned long long)a0;
- (void)cropViewController:(id)a0 didCropToImage:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 angle:(long long)a3 button:(id)a4;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (void)pickPhotoFromSource:(id)a0 WithReason:(id)a1 allowSource:(unsigned long long)a2 cert:(id)a3 completionBlock:(id /* block */)a4;
- (void)pickPhotoInPhotoLibraryFromSource:(id)a0 editorType:(unsigned long long)a1 cropingStyle:(unsigned long long)a2 aspectRato:(struct CGSize { double x0; double x1; })a3 selectedBlock:(id /* block */)a4 dismissedBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)pickPhotoWithCameraFromSource:(id)a0 editorType:(unsigned long long)a1 cropingStyle:(unsigned long long)a2 aspectRato:(struct CGSize { double x0; double x1; })a3 cert:(id)a4 selectedBlock:(id /* block */)a5 dismissedBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (void)removeCurrentCropViewControllerWithCompletion:(id /* block */)a0;
- (void)willEnterForeground;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
