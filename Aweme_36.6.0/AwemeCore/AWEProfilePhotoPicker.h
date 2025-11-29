@class NSString, NSDictionary, UIImage, UIView, CAKModalTransitionDelegate;

@interface AWEProfilePhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, TOCropViewControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ extendedCompletionBlock;
@property (weak, nonatomic) UIView *fromView;
@property (nonatomic) struct CGSize { double width; double height; } cropRato;
@property (retain, nonatomic) UIImage *coverMaskImage;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (nonatomic) unsigned long long selectedSource;
@property (nonatomic) unsigned long long editorType;
@property (nonatomic) unsigned long long cropingStyle;
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
- (void)showAlertWithSourceType:(unsigned long long)a0;
- (void)showImagePicker:(long long)a0 enableCrop:(BOOL)a1;
- (void)didSelectWithSource:(unsigned long long)a0;
- (void)showTOCropVCWithStyle:(unsigned long long)a0 image:(id)a1 aspectRato:(struct CGSize { double x0; double x1; })a2 coverMaskImage:(id)a3 completionBlock:(id /* block */)a4;
- (long long)_tocropingStyle:(unsigned long long)a0;
- (void)cropViewController:(id)a0 didCropToImage:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 angle:(long long)a3 button:(id)a4;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (void)pickPhotoInPhotoLibraryWithParams:(id)a0;
- (void)pickPhotoAndVideoWithParams:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
