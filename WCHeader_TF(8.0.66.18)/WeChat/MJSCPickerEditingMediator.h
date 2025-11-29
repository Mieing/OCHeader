@class MJShootComposingViewController, NSString, RecommendedMusicInfo;

@interface MJSCPickerEditingMediator : NSObject <MMImagePickerManagerDelegate>

@property (weak, nonatomic) MJShootComposingViewController *composingVC;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) NSString *shootEntryExtInfo;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlbumPickerForSingleImageSelectionWithEnterScene:(unsigned long long)a0;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)a0;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)a0 isCurrentAIGCTemplate:(BOOL)a1;
- (void)dismissImagePickerAnimated:(BOOL)a0;
- (void)dismissImagePickerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)postEnterScene;
- (id)assetPickerController:(id)a0 willSelectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didSelectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didDeselectAsset:(id)a1 withCurrentState:(id)a2;
- (id)_onAssetPickerDidChangeAssetSelection:(id)a0 withCurrentState:(id)a1;
- (id)assetPickerController:(id)a0 willFinishPickingAssets:(id)a1 withCurrentState:(id)a2;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingWithAssetInfos:(id)a1 isUsingTemplate:(BOOL)a2;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)a0;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (id)onImagePreviewBrowserController:(id)a0 didCreateVideoCompositionActionFlow:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingAssetWithPostSession:(id)a1;
- (void)handleMiaoJianSourceLocalVideoAssetPickingActionWithPostSession:(id)a0;
- (BOOL)isFromFinderRedPackageEntry;
- (BOOL)isFromFinderRedPackageEntryInOldMovieComposing;
- (BOOL)isFromFinderRedPackageEntryInNewMovieComposing;
- (BOOL)shouldInterruptForAssetsDurationCheckWithAssetInfos:(id)a0;
- (void)notifyDidFinishPickImageAssetInfos:(id)a0 picker:(id)a1;
- (void)notifyDidFinishPickAssetInfos:(id)a0 picker:(id)a1;
- (void).cxx_destruct;

@end
