@class CAKModalTransitionDelegate, NSString, UIView;

@interface AWENewVideoCoverPicker : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ extendedCompletionBlock;
@property (weak, nonatomic) UIView *fromView;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (nonatomic) unsigned long long selectedSource;
@property (nonatomic) unsigned long long editorType;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
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
- (id)albumViewControllerConfigForHeader:(id)a0;
- (void)showAlertWithSourceType:(unsigned long long)a0;
- (void)showImagePicker:(long long)a0 enableCrop:(BOOL)a1;
- (void)pickPhotoInPhotoLibraryFromSource:(id)a0 editorType:(unsigned long long)a1 aspectRato:(struct CGSize { double x0; double x1; })a2 selectedBlock:(id /* block */)a3 dismissedBlock:(id /* block */)a4 extendedCompletionBlock:(id /* block */)a5;
- (BOOL)checkImageSizeIsConform:(id)a0;
- (void).cxx_destruct;

@end
